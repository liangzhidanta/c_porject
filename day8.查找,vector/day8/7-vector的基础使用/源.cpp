#include<vector> //ͷ�ļ�
#include<stdio.h>
using namespace std;
int main() {
	// ���嶯̬����ķ��� vector<typename> ������;
	vector<int> vec1; //���԰�vector<int>������һ���������ͣ���������������
	// ��ĩβ����Ԫ�� push_back 
	// C++���еĽṹ������࣬��ĳ�Ա������һ������
	vec1.push_back(1);
	vec1.push_back(2);
	vec1.push_back(3);
	// ������ʵ���Ԫ��
	printf("vec1[0] = %d, vec1[1] = %d, vec1[2] = %d\n",
		vec1[0], vec1[1], vec1[2]);
	//printf("%d\n", vec1[3]);û�з���Ŀռ䣬���ܷ��ʶ�Ӧλ��
	vec1.clear();
	return 0;
}