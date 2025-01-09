/*
 * @Author: liangzhidanta_wsh 1652168492@qq.com
 * @Date: 2025-01-07 19:56:23
 * @LastEditors: liangzhidanta_wsh 1652168492@qq.com
 * @LastEditTime: 2025-01-07 19:57:22
 * @FilePath: \c_porject\z_cpp学习\C++ 中的函数重载\main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
/* C++ 中的函数重载
在同一个作用域内，可以声明几个功能类似的同名函数，但是这些同名函数的形式参数
（指参数的个数、类型或者顺序）必须不同。您不能仅通过返回类型的不同来重载函数。
下面的实例中，同名函数 print() 被用于输出不同的数据类型： */
#include <iostream>
using namespace std;
 
class printData
{
   public:
      void print(int i) {
        cout << "整数为: " << i << endl;
      }
 
      void print(double  f) {
        cout << "浮点数为: " << f << endl;
      }
 
      void print(char c[]) {
        cout << "字符串为: " << c << endl;
      }
};
 
int main(void)
{
   printData pd;
 
   // 输出整数
   pd.print(5);
   // 输出浮点数
   pd.print(500.263);
   // 输出字符串
   char c[] = "Hello C++";
   pd.print(c);
 
   return 0;
}