/*
 * @Author: liangzhidanta_wsh 1652168492@qq.com
 * @Date: 2025-01-09 11:10:42
 * @LastEditors: liangzhidanta_wsh 1652168492@qq.com
 * @LastEditTime: 2025-01-09 11:23:29
 * @FilePath: \c_porject\z_cpp学习\引用\C++ 把引用作为参数\mian.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */

#include <iostream>
using namespace std;
 
// 函数声明
void swap(int &x, int &y);
void change(int &i);
int main ()
{
    // 局部变量声明
    int a = 100;
    int b = 200;
    int i = 10;  
    cout << "交换前，a 的值：" << a << endl;
    cout << "交换前，b 的值：" << b << endl;
    cout << "change前，i 的值：" << i << endl;
    /* 调用函数来交换值 */
    swap(a, b);
    change(i);
    cout << "交换后，a 的值：" << a << endl;
    cout << "交换后，b 的值：" << b << endl;
    cout << "change后，i 的值：" << i << endl;
    return 0;
}
 
// 函数定义
void swap(int& x, int& y)
{
   int temp;
   temp = x; /* 保存地址 x 的值 */
   x = y;    /* 把 y 赋值给 x */
   y = temp; /* 把 x 赋值给 y  */
  
   return;
}
void change(int &i){
    i = 123;
}