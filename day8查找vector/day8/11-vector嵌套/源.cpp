#include<vector> //ͷ�ļ�
#include<stdio.h>
using namespace std;
int main() {
	// �����ά����������ǹ̶��ģ���������д
	vector<int> vec1[3]; // 3��������
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
	// �����ά�����к������������̶�
	vector<vector<int> > vec2; // ������������
	vector<int> vec;
	int row = 3; // ��������������ֵ
	for (int i = 0; i < row; ++i) {
		vec.clear(); // �������Ԫ��
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