import numpy 
import sys
import buffer_pb2

def rank_request(array):
	key_rank = numpy.argsort(-array);
	x_cor = [];
	y_cor = [];
	value = [];

	rank = buffer_pb2.rank();

	for i in range (0,20):
		#y_cor.append(int(key_rank[i]/19));
		#x_cor.append(int(key_rank[i]%19));
		#value.append(array[key_rank[i]]);
		
		rank.x_cor.append(int(key_rank[i]%19));
		rank.y_cor.append(int(key_rank[i]/19));
		rank.value.append(array[key_rank[i]]);

	//data is a string
	data = rank.SerializeToString();
	

def main():
	array = numpy.array([1000,2,1,4,6,3,4,3,2,5,2,3,5,3,5,3,5,3,2,5,6,7,2,5,3,2,5,8,6,3,5,63]);
	rank_request(array);

if __name__ == '__main__':
	main()
