#include<vector> //头文件
#include<stdio.h>
using namespace std;
int main() {
	// 定义动态数组的方法 vector<typename> 数组名;
	vector<int> vec1; //可以把vector<int>看成是一个整体类型，即整型数组类型
	// 在末尾新增元素 push_back 
	// C++当中的结构体叫做类，类的成员可以是一个函数
	vec1.push_back(1);
	vec1.push_back(2);
	vec1.push_back(3);
	// 随机访问单个元素
	printf("vec1[0] = %d, vec1[1] = %d, vec1[2] = %d\n",
		vec1[0], vec1[1], vec1[2]);
	//printf("%d\n", vec1[3]);没有分配的空间，不能访问对应位置
	vec1.clear();
	return 0;
}