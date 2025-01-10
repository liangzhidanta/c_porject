#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
	int i;
	cin >> i;//也可能读取数据超时，scanf性能更好
	cout << "C++ output! i = " << i << "\n";//输出时间久，机试超时
	printf("C output! i = %d\n", i); // 输入输出优先使用C语言风格
	return 0;
}