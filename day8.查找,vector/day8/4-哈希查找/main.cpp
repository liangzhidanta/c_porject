#include <stdio.h>
#include <stdlib.h>

#define MAXKEY 1000
int hash(const char* key)
{
	int h = 0, g;
	while (*key)
	{
		h = (h << 4) + *key++;
		g = h & 0xf0000000;
		if (g)
			h ^= g >> 24;
		h &= ~g;
	}
	return h % MAXKEY;
}

int main()
{
	const char* pStr[5] = { "xiongda","lele","hanmeimei","wangdao","fenghua" };
	char* hashTable[MAXKEY] = { NULL };//哈希表
	int i;
	for (i = 0; i < 5; i++)
	{
		if (hashTable[hash(pStr[i])])//冲突了
		{
			//解决冲突
		}
		else {
			printf("%10s hashValue=%d\n", pStr[i], hash(pStr[i]));
			hashTable[hash(pStr[i])] = (char*)pStr[i];//没有冲突，存入
		}
	}
	return 0;
}
