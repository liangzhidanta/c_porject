//子函数
#include "func.h"
int printstar(int i) //i 即为形式参数
{
    printf("**********************\n");
    printf("printstar %d\n",i);
    return i+3;
}
void print_message() //可以调用 printstar
{
    printf("how do you do\n");
    printstar(3);
}