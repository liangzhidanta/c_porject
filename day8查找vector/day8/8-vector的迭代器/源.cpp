#include<vector> //ͷ�ļ�
#include<stdio.h>
using namespace std;
int main() {
	// ���嶯̬����ķ��� vector<typename> ������;
	vector<int> vec1; //���԰�vector<int>������һ���������ͣ���������������
	vector<char> vec2;
	vector<vector<int> > vec3; // vec3�ǡ���������顱������ά��������

	// ��ĩβ����Ԫ�� push_back 
	// C++���еĽṹ������࣬��ĳ�Ա������һ������
	vec1.push_back(1);
	vec1.push_back(2);
	vec1.push_back(3);
	vec1.push_back(4);
	vector<int>::iterator it;
	for (it = vec1.begin(); it != vec1.end(); ++it) {
		// begin�������ص�һ��Ԫ�ص�λ��
		// end�����������һ��Ԫ�صĺ�һ��λ��
		// ������֧��ƫ�ƺͽ����������
		// !! ʹ�õ�������ʱ���������鵱���������߲���Ԫ��
		printf("*it = %d\n", *it);
	}

	int i;
	for (i = 0; i < vec1.size(); i++)
	{
		printf("%3d", vec1[i]);
	}
	putchar('\n');

	// ɾ��ĩβԪ�� pop_back
	vec1.pop_back();
	printf("after pop_back!\n");
	for (it = vec1.begin(); it != vec1.end(); ++it) {
		printf("*it = %d\n", *it);
	}

	// ɾ���м�λ��һ�����߶��Ԫ�� erase
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
	vector<int>::iterator it2 = vec1.end() -1;//ָ�����һ��Ԫ��
	vec1.erase(it1, it2);//����ҿ�
	return 0;
}