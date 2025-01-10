#include <stdio.h>
#include <stdlib.h>
#define N 10
int binarySearch(int* arr, int low, int high, int target)
{
	int mid;
	while (low <= high)//high�����Ǵ����ֵ9���ܹ����ʵ�����±꣬��������С�ڵ���high
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
	int pos;  //�洢���ҵ���Ԫ��λ��
	pos = binarySearch(a, 0, N - 1, 99);
	printf("pos=%d\n", pos);
	return 0;
}