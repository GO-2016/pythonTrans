#include "buffer.pb.h"
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void rank_responce(vector<int> &x_cor, vector<int> &y_cor,vector<double> &value);

int main(){
	vector<int> x,y;
	vector<double> v;
	rank_responce(x,y,v);
	for (int i=0;i<20;++i) cout<<x[i]<<endl;
}

void rank_responce(vector<int> &x_cor, vector<int> &y_cor,vector<double> &value){
	x_cor = vector<int>(20,0);
	y_cor = vector<int>(20,0);
	value = vector<double>(20,0);

	buffer::rank rank;

	string data;
	rank.ParseFromString(&input);

	for (int i=0;i<rank.x_cor_size();++i){
		x_cor[i] = rank.x_cor(i);
		y_cor[i] = rank.y_cor(i);
		value[i] = rank.value(i);
	}
}




