/*
 * @Author: liangzhidanta_wsh 1652168492@qq.com
 * @Date: 2025-01-01 11:21:58
 * @LastEditors: liangzhidanta_wsh 1652168492@qq.com
 * @LastEditTime: 2025-01-02 17:19:04
 * @FilePath: \c_porject\function\main.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "func.h"// ""：引用当前目录下的头文件
                // <>：引用标准库中的头文件
int main()
{/* main 函数中调用 print_message 函数，
 而 print_message函数中又调用 printstar 
 函数，我们把这种调用称为嵌套调用 */
    int a = 10;
    a = printstar(a);
    print_message();
    printstar(a);
    printstar(a);
    return 0;

}
//实参是传递给函数的具体数据，函数通过形参来接收这些数据。