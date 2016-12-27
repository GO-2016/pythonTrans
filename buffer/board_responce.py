import buffer_pb2
import sys
import numpy 

def board_responce()
	buffer = buffer_pb2.rank();

	//data is a string
	buffer.ParseFromString(data);
	
	
	board = zeros(19,19,7);
	for i in buffer.current_state:
		board[i/19;1%19;0] = i;
	for i in buffer.our_group_lib1:
		board[i/19;1%19;1] = i;
	for i in buffer.our_group_lib2:
		board[i/19;1%19;2] = i;
	for i in buffer.our_group_lib3_plus:
		board[i/19;1%19;3] = i;
	for i in buffer.oppo_group_lib1:
		board[i/19;1%19;4] = i;
	for i in buffer.oppo_group_lib2:
		board[i/19;1%19;5] = i;
	for i in buffer.oppo_group_lib3_plus:
		board[i/19;1%19;6] = i;

	return board;
