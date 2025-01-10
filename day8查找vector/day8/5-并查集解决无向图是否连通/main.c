#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 1001 // 定义N为1001，0未使用

// 初始化并查集时使用全数组
int father[N];

void init(int n)
{
    int i;
    for (i = 1; i <= n; i++)
    {
        father[i] = i; // 每个节点的父节点初始化为自己
    }
}

// 查找某个节点的最终父节点
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


// 合并两个节点所在的集合，x, y是节点编号，*cnt记录连通分量的数量
void Union(int x, int y, int *cnt)
{
    int fx = Find(x);
    int fy = Find(y);
    if (fx != fy) // 如果两个节点不在同一个集合中
    {
        --*cnt;
        father[fx] = fy;
    }
}


int main()
{
    int n, m; // n是节点数量，m是边的数量
    int i, x, y;
    while (scanf("%d%d", &n, &m) != EOF)
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