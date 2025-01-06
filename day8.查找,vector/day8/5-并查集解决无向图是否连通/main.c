#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 1001 // ���N����� 0���±�δʹ��
// ˢ�㷨���ʱ�򣬿���ʹ��ȫ�ֱ���
int father[N];

void init(int n)
{
	int i;
	for (i = 1; i <= n; i++)
	{
		father[i] = i;//ÿ���˵ĸ��׶����Լ����ж��ٸ�������ж��ٸ�����
	}
}

//��ĳ����������ǿ��������ص���������
int Find(int x)
{
	int fx = father[x];
	if (fx == x)
	{
		return fx;
	}
	else {
		return Find(fx);
	}
}


//�ϲ���������,x,y���Ƕ��㣬*cnt�����ж��ٸ�����
void Union(int x,int y,int *cnt)
{
	int fx=Find(x);
	int fy=Find(y);
	if (fx != fy)//�������������ͬ�ļ���
	{
		--*cnt;
		father[fx] = fy;
	}
}


int main()
{
	int n, m;//n�Ƕ�������m��������
	int i,x,y;
	while (scanf("%d%d",&n,&m) != EOF)
	{
		init(n);
		for (i = 0; i < m; i++)
		{
			scanf("%d%d", &x, &y);
			Union(x, y, &n);
		}
		if (1 == n)
		{
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
}