#include <vector>
#include <algorithm> //需要引入algorithm头文件
#include <stdio.h>
using namespace std;
int main() {
	vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(2);
	vec.push_back(1);

	// find的3个参数依次是 [begin, end) 和 待查找元素
	vector<int>::iterator it = find(vec.begin(), vec.end(), 3);
	printf("*it = %d\n", *it);
	it = find(vec.begin(), vec.end(), 5);
	if (it == vec.end()) {
		printf("5 is not found!\n");
	}
	vec[0] = 100;
	return 0;
}