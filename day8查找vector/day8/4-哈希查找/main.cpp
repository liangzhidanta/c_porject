/*
 * @Author: liangzhidanta_wsh 1652168492@qq.com
 * @Date: 2025-01-06 21:31:56
 * @LastEditors: liangzhidanta_wsh 1652168492@qq.com
 * @LastEditTime: 2025-01-07 07:24:19
 * @FilePath: \c_porject\day8.查找,vector\day8\4-哈希查找\main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
#include <stdlib.h>

#define MAXKEY 1000

/**
 * 哈希函数实现。
 * 将字符串键转换为哈希值。
 * 参数：
 *   key - 要哈希的字符串键。
 * 返回值：
 *   返回键的哈希值。
 */
int hash(const char* key)//elf_hash,一种哈希算法
{
    int h = 0, g;
    while (*key)
    {
        // 计算哈希值，左移4位并加上当前字符的ASCII值
        h = (h << 4) + *key++;
        g = h & 0xf0000000;
        if (g)
            // 如果最高位有非零值，则进行异或操作以避免溢出
            h ^= g >> 24;
        h &= ~g;
    }
    // 返回哈希值对MAXKEY取模的结果，确保哈希值在0到MAXKEY-1之间
    return h % MAXKEY;
}

int main()
{
    const char* pStr[5] = { "xiongda", "lele", "hanmeimei", "wangdao", "fenghua" };
    char* hashTable[MAXKEY] = { NULL }; // 初始化哈希表，所有元素初始为NULL

    for (int i = 0; i < 5; i++)
    {
        // 检查哈希表中是否已经有相同的哈希值（即发生冲突）
        if (hashTable[hash(pStr[i])])
        {
            // 处理冲突的情况
        }
        else {
            // 输出字符串及其对应的哈希值
            printf("%10s hashValue=%d\n", pStr[i], hash(pStr[i]));
            // 将字符串插入哈希表中
            hashTable[hash(pStr[i])] = (char*)pStr[i];
        }
    }
	int x =sizeof(hashTable[0]);
	printf("%d\n",x);	
    return 0;
}