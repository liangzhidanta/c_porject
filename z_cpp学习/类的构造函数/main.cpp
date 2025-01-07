/*
 * @Author: liangzhidanta_wsh 1652168492@qq.com
 * @Date: 2025-01-07 18:28:37
 * @LastEditors: liangzhidanta_wsh 1652168492@qq.com
 * @LastEditTime: 2025-01-07 18:35:11
 * @FilePath: \c_porject\cpp学习\类的构造函数\main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
 /* 类的构造函数是类的一种特殊的成员函数，它会在每次创建类的新对象时执行。
    构造函数的名称与类的名称是完全相同的，并且不会返回任何类型，也不会返
    回 void。构造函数可用于为某些成员变量设置初始值。 */
using namespace std;// 使用命名空间
 
class Line
{
   public:
      void setLength( double len );
      double getLength( void );
      Line();  // 这是构造函，没有返回类型
 
   private:
      double length;
};
 
// 成员函数定义，包括构造函数
Line::Line(void)//在每次创建对象时调用
{
    cout << "Object is being created" << endl;
}
 
void Line::setLength( double len )
{
    length = len;
}
 
double Line::getLength( void )
{
    return length;
}
// 程序的主函数
int main( )
{
   Line line;
 
   // 设置长度
   line.setLength(6.0); 
   cout << "Length of line : " << line.getLength() <<endl;
 
   return 0;
}