#include "func.h" 
/* C 语言支持 4 种变量存储类型：自动变量（auto）、静态变量（static）、
寄存器变量（register）和外部变量（extern）。 */
extern int k;
void print1()
{
    printf("print1 k=%d\n",k);
}
int k = 10; //static 修饰全局变量，该变量不能被其他文件借用;
            // 全局变量从定义位置到末尾有效(eg：如果注释掉main
            // 和func中的extern int k则,编译不通)
int main()
{
    int i=10;
    {
        int j=5;
    } //局部变量的有效范围是离自己最近的花括号
    printf("i=%d,k=%d\n",i,k);
    print();
    print();
    system("pause");
    return 0;
}