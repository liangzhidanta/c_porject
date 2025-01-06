#include <stdio.h>
#include <string.h>

#define N 13
int main()
{
	int arr[N] = { 1,-3,6,4,-3,6,-8,1,2,-7,65,65,68 };
	long long* bitmap = (long long*)malloc(512 * 1024 * 1024);
	memset(bitmap, 0, 512 * 1024 * 1024);//�ѿռ�����λ�ö���Ϊ0
	int i;
	int pos;//����bitmap�ĵڼ�������Ԫ��
	int bit_pos;//�ŵ�ĳ������Ԫ�صĵڼ�λ
	for (i = 0; i < N; i++)
	{
		pos = (arr[i] + 2147483648) / 64;//�ŵ�����Ԫ�صĵڼ���λ��
		bit_pos = (arr[i] + 2147483648) % 64;//��ĳһ��������Ԫ�����ƶ���λ
		if ((long long)1 << bit_pos & bitmap[pos])
		{
			//�Ѿ����ֹ���ɶ������
		}
		else {
			bitmap[pos] |= (long long)1 << bit_pos;//��һ�����֣���Ҫ�Ѷ�Ӧ��λ����Ϊ1
			printf("%3d", arr[i]);
		}
	}
	printf("\n");
	return 0;
}