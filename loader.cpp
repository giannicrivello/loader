#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include "loader.h"

template <typename T> loader<T>::loader(std::vector<T> vec){
	vector = vec;
	idx=0;

}

template <typename T> std::vector<T> loader<T>::load(int load_num){
	std::vector<T> vec;
	int n=0;
	while(n < load_num){
		if(idx >= vector.size()) idx=0;
		vec.push_back(vector[idx]);
		n++;
		idx++;
	}
	idx = load_num;
	return vec;

}
