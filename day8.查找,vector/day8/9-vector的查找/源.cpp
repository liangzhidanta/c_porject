#include <vector>
#include <algorithm> //��Ҫ����algorithmͷ�ļ�
#include <stdio.h>
using namespace std;
int main() {
	vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(2);
	vec.push_back(1);

	// find��3������������ [begin, end) �� ������Ԫ��
	vector<int>::iterator it = find(vec.begin(), vec.end(), 3);
	printf("*it = %d\n", *it);
	it = find(vec.begin(), vec.end(), 5);
	if (it == vec.end()) {
		printf("5 is not found!\n");
	}
	vec[0] = 100;
	return 0;
}