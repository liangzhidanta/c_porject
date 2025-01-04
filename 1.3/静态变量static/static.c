/*
 * @Author: liangzhidanta_wsh 1652168492@qq.com
 * @Date: 2025-01-03 13:25:01
 * @LastEditors: liangzhidanta_wsh 1652168492@qq.com
 * @LastEditTime: 2025-01-03 14:59:08
 * @FilePath: \1.3\静态变量static\static.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
/* 静态局部变量是在编译时赋初值的，且只赋初值一次，即在程序运行时
它已有初值。以后每次调用函数时，不再重新赋初值，而只是保留上次函数
调用结束时的值 */
#include "static.h"

void func(void);
int main(void)
{
    func();
    func();
    func();
    system("pause");
    return 0;
}