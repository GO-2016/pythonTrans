    template<std::size_t W, std::size_t H>
    auto Board<W, H>::generateRequestV1(Player player) -> buffer::board
    {
        buffer::board buffer;
        buffer.mutable_current_state()->Reserve(W*H);
        buffer.mutable_our_group_lib1()->Reserve(W*H);
        buffer.mutable_our_group_lib2()->Reserve(W*H);
        buffer.mutable_our_group_lib3_plus()->Reserve(W*H);
        buffer.mutable_oppo_group_lib1()->Reserve(W*H);
        buffer.mutable_oppo_group_lib2()->Reserve(W*H);
        buffer.mutable_oppo_group_lib3_plus()->Reserve(W*H);
        PointType::for_all([&](PointType p) {
            auto group = getPointGroup(p);
            bool is_empty = group == groupEnd();
            if (is_empty)
            {
		buffer.add_current_state(false);
                buffer.add_our_group_lib1(false);
                buffer.add_our_group_lib2(false);
                buffer.add_our_group_lib3_plus(false);
                buffer.add_oppo_group_lib1(false);
                buffer.add_oppo_group_lib2(false);
                buffer.add_oppo_group_lib3_plus(false);
            } else
            {
                bool is_our = group->getPlayer() == player;
                std::size_t lib = group->getLiberty();
		buffer.add_current_state(true);
                if (is_our)
                {
                    buffer.add_our_group_lib1(lib == 1);
                    buffer.add_our_group_lib2(lib == 2);
                    buffer.add_our_group_lib3_plus(lib >= 3);
                    buffer.add_oppo_group_lib1(false);
                    buffer.add_oppo_group_lib2(false);
                    buffer.add_oppo_group_lib3_plus(false);
                } else
                {
                    buffer.add_oppo_group_lib1(lib == 1);
                    buffer.add_oppo_group_lib2(lib == 2);
                    buffer.add_oppo_group_lib3_plus(lib >= 3);
                    buffer.add_our_group_lib1(false);
                    buffer.add_our_group_lib2(false);
                    buffer.add_our_group_lib3_plus(false);
                }
            }
        });
        string data;
        buffer.SerializeToString(data);
        return buffer;
    }
