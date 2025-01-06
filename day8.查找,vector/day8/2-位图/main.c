#include <stdio.h>
#include <string.h>

#define N 13
int main()
{
	int arr[N] = { 1,-3,6,4,-3,6,-8,1,2,-7,65,65,68 };
	long long* bitmap = (long long*)malloc(512 * 1024 * 1024);
	memset(bitmap, 0, 512 * 1024 * 1024);//把空间所有位置都放为0
	int i;
	int pos;//放入bitmap的第几个整型元素
	int bit_pos;//放到某个整型元素的第几位
	for (i = 0; i < N; i++)
	{
		pos = (arr[i] + 2147483648) / 64;//放到整型元素的第几个位置
		bit_pos = (arr[i] + 2147483648) % 64;//在某一个长整型元素上移动几位
		if ((long long)1 << bit_pos & bitmap[pos])
		{
			//已经出现过，啥都不做
		}
		else {
			bitmap[pos] |= (long long)1 << bit_pos;//第一个出现，就要把对应的位设置为1
			printf("%3d", arr[i]);
		}
	}
	printf("\n");
	return 0;
}