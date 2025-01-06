#include <stdio.h>
#include <stdlib.h>
#define N 10
int binarySearch(int* arr, int low, int high, int target)
{
	int mid;
	while (low <= high)//high是我们传入的值9，能够访问到这个下标，所以这里小于等于high
	{
		mid = (low + high) / 2;
		if (arr[mid] > target)
		{
			high = mid - 1;
		}
		else if (arr[mid] < target)
		{
			low = mid + 1;
		}
		else {
			return mid;
		}
	}
	return -1;
}

int main()
{
	int a[10] = { 2,14,18,31,32,46,71,82,85,99 };
	int pos;  //存储查找到的元素位置
	pos = binarySearch(a, 0, N - 1, 99);
	printf("pos=%d\n", pos);
	return 0;
}