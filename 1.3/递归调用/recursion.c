/*
 * @Author: liangzhidanta_wsh 1652168492@qq.com
 * @Date: 2025-01-03 10:22:01
 * @LastEditors: liangzhidanta_wsh 1652168492@qq.com
 * @LastEditTime: 2025-01-03 11:29:04
 * @FilePath: \1.3\.vscode\递归调用\recursion.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
#include <stdlib.h>
//求 n 的阶乘
int f(int n){
    if(1==n){
        return 1;
    }
    return n*f(n-1);
}
//走楼梯
/* 假如有 n 个台阶，一次只能上 1 个台阶或 2 个台阶，请问走到第 n 个台阶有几种走法？
为便于读者理解题意，这里举例说明如下：假如有 3 个台阶，那么总计就有 3 种走法：第一
种为每次上 1 个台阶，上 3 次；第二种为先上 2 个台阶，再上1 个台阶；第三种为先上 1 
个台阶，再上 2 个台阶。 */
int step(int n){
    if(1==n){
        return 1;
    }
    if(2==n){
        return 2;
    }
    return step(n-1)+step(n-2);//倒推递归
}
int main()
{   
    int n;
    int ret;
    scanf("%d",&n); //请输入数字的大小
    ret=f(n);
    printf("%d\n",ret);
    scanf("%d",&n); //请输入台阶数
    ret=step(n);
    printf("%d\n",ret);
    system("pause");
    return 0;
}
