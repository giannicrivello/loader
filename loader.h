#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
template<typename T>
class loader {
	int idx;
	public:
	std::vector<T> vector;
		loader(std::vector<T> vec);
		~loader(); 
		std::vector<T> load(int load_num);
};
