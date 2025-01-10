#include<vector> //头文件
#include<stdio.h>
using namespace std;
int main() {
	// 如果二维数组的行数是固定的，可以这样写
	vector<int> vec1[3]; // 3行任意列
	int col;
	for (int i = 0; i < 3; ++i) {
		col = i + 1;
		for (int j = 0; j < col; ++j) {
			vec1[i].push_back(j + 1);
		}
	}
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < vec1[i].size(); ++j) {
			printf("%3d", vec1[i][j]);
		}
		printf("\n");
	}

	puts("------------------------------------");
	// 如果二维数组行和列数量都不固定
	vector<vector<int> > vec2; // 任意行任意列
	vector<int> vec;
	int row = 3; // 行数可以是任意值
	for (int i = 0; i < row; ++i) {
		vec.clear(); // 清除所有元素
		col = i + 1;
		for (int j = 0; j < col; ++j) {
			vec.push_back(j + 1);
		}
		vec2.push_back(vec);
	}
	for (int i = 0; i < vec2.size(); ++i) {
		for (int j = 0; j < vec2[i].size(); ++j) {
			printf("%3d", vec2[i][j]);
		}
		printf("\n");
	}
	return 0;
}