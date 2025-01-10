#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <vector>
using namespace std;
int main() {
	vector<int> all;
	vector<int> prime;
	prime.push_back(2); // 最开始只有一个质数2
	all.resize(200000); // all[2] ... all[200000] 都是0 代表还没有被删除
	int p = 2;//临时质数存储大哥
	//第一步先把2的倍数都删除了，找到了最小的质数3,3放入prime，3的倍数再....
	while (prime.size() <= 10000) {
		for (int i = p; i < 200000; i += p) {
			all[i] = 1; // 把所有p的倍数都删除
		}
		for (int j = p; j < 200000; ++j) {
			// 找到比p大的最小的下一个未被删除的数，而这个数就是质数
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