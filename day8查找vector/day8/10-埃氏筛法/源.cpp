#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <vector>
using namespace std;
int main() {
	vector<int> all;
	vector<int> prime;
	prime.push_back(2); // �ʼֻ��һ������2
	all.resize(200000); // all[2] ... all[200000] ����0 ����û�б�ɾ��
	int p = 2;//��ʱ�����洢���
	//��һ���Ȱ�2�ı�����ɾ���ˣ��ҵ�����С������3,3����prime��3�ı�����....
	while (prime.size() <= 10000) {
		for (int i = p; i < 200000; i += p) {
			all[i] = 1; // ������p�ı�����ɾ��
		}
		for (int j = p; j < 200000; ++j) {
			// �ҵ���p�����С����һ��δ��ɾ�����������������������
			if (all[j] == 0) {
				p = j;
				prime.push_back(p);
				break;
			}
		}
	}
	int k;
	while (scanf("%d", &k) != EOF) {
		printf("%d\n", prime[k - 1]);
	}
	return 0;
}