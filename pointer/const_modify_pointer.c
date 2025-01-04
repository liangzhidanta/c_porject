/*
 * @Author: liangzhidanta_wsh 1652168492@qq.com
 * @Date: 2024-12-31 14:57:48
 * @LastEditors: liangzhidanta_wsh 1652168492@qq.com
 * @LastEditTime: 2024-12-31 15:33:18
 * @FilePath: \c_porject\pointer\const_modify_pointer.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */

//const修饰指针
/* const 关键字在 C 语言中用于声明常量，确保某些变量或指针指向的数据不会被修改。
const 关键字主要用于保护数据不被意外修改，提高代码的安全性和可读性。
合理使用 const 可以帮助编译器进行更多的优化，并减少潜在的错误
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
//情况一
    char str[] = "hello world";
    const char *p = str;//p指针指向的"空间"不能修改
    str[0] = 'H';
    puts(p);
    //p[0] = 'n';//报错：表达式必须是可修改的左值
    p = "how are you";//指针可以修改，不会报错
    puts(p);
//情况二
    char* const q = str;//q指向的指针不能修改
    //q = "hello";//报错

    return 0;


}