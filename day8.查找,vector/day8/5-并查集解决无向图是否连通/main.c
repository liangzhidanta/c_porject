#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 1001 // 最多N个结点 0号下标未使用
// 刷算法题的时候，可以使用全局变量
int father[N];

void init(int n)
{
	int i;
	for (i = 1; i <= n; i++)
	{
		father[i] = i;//每个人的父亲都是自己，有多少个顶点就有多少个集合
	}
}

//找某个结点属于那颗树，返回的树的树根
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


//合并两个集合,x,y都是顶点，*cnt代表有多少个集合
void Union(int x,int y,int *cnt)
{
	int fx=Find(x);
	int fy=Find(y);
	if (fx != fy)//如果属于两个不同的集合
	{
		--*cnt;
		father[fx] = fy;
	}
}


int main()
{
	int n, m;//n是顶点数，m多少条边
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