#include<vector> //头文件
#include<stdio.h>
using namespace std;
int main() {
	// 定义动态数组的方法 vector<typename> 数组名;
	vector<int> vec1; //可以把vector<int>看成是一个整体类型，即整型数组类型
	vector<char> vec2;
	vector<vector<int> > vec3; // vec3是“数组的数组”，即二维数组类型

	// 在末尾新增元素 push_back 
	// C++当中的结构体叫做类，类的成员可以是一个函数
	vec1.push_back(1);
	vec1.push_back(2);
	vec1.push_back(3);
	vec1.push_back(4);
	vector<int>::iterator it;
	for (it = vec1.begin(); it != vec1.end(); ++it) {
		// begin方法返回第一个元素的位置
		// end方法返回最后一个元素的后一个位置
		// 迭代器支持偏移和解引用运算符
		// !! 使用迭代器的时候不能往数组当中新增或者插入元素
		printf("*it = %d\n", *it);
	}

	int i;
	for (i = 0; i < vec1.size(); i++)
	{
		printf("%3d", vec1[i]);
	}
	putchar('\n');

	// 删除末尾元素 pop_back
	vec1.pop_back();
	printf("after pop_back!\n");
	for (it = vec1.begin(); it != vec1.end(); ++it) {
		printf("*it = %d\n", *it);
	}

	// 删除中间位置一个或者多个元素 erase
	it = vec1.begin();
	vec1.erase(it);
	printf("after erase 1!\n");
	for (it = vec1.begin(); it != vec1.end(); ++it) {
		printf("*it = %d\n", *it);
	}

	vec1.push_back(7);
	vec1.push_back(8);
	vec1.push_back(9);
	vector<int>::iterator it1 = vec1.begin() + 1;
	vector<int>::iterator it2 = vec1.end() -1;//指向最后一个元素
	vec1.erase(it1, it2);//左闭右开
	return 0;
}