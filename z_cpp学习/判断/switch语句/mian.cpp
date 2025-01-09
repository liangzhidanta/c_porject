/*
 * @Author: liangzhidanta_wsh 1652168492@qq.com
 * @Date: 2025-01-09 08:00:21
 * @LastEditors: liangzhidanta_wsh 1652168492@qq.com
 * @LastEditTime: 2025-01-09 08:08:34
 * @FilePath: \c_porject\z_cpp学习\判断\switch语句\mian.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
/* 在 C++ 中，switch 语句用于基于不同的条件执行不同的代码块，它通常用来替代一系列
的 if-else 语句，使代码更清晰和易读。一个 switch 语句允许测试一个变量等于多个值时
的情况。每个值称为一个 case，且被测试的变量会对每个 switch case 进行检查 */
#include <iostream>
/* 
C++ 中 switch 语句的语法：
switch(expression){
    case constant-expression  :
       statement(s);
       break; // 可选的
    case constant-expression  :
       statement(s);
       break; // 可选的
  
    // 您可以有任意数量的 case 语句
    default : // 可选的
       statement(s);
}
switch 语句必须遵循下面的规则：
1.switch 语句中的 expression 必须是一个整型或枚举类型，或者是一个 class 类型，其中
  class 有一个单一的转换函数将其转换为整型或枚举类型。
2.在一个 switch 中可以有任意数量的 case 语句。每个 case 后跟一个要比较的值和一个冒号。
3.case 的 constant-expression 必须与 switch 中的变量具有相同的数据类型，且必须是一个
  常量或字面量。
4.当被测试的变量等于 case 中的常量时，case 后跟的语句将被执行，直到遇到 break 语句为止。*******
5.当遇到 break 语句时，switch 终止，控制流将跳转到 switch 语句后的下一行。
6.不是每一个 case 都需要包含 break。如果 case 语句不包含 break，控制流将会 继续 后续
  的 case，直到遇到 break 为止。
7.一个 switch 语句可以有一个可选的 default case，出现在 switch 的结尾。default case
  可用于在上面所有 case 都不为真时执行一个任务。default case 中的 break 语句不是必需的。
 */
int main() {
    int day = 4;

    switch (day) {
        case 1:
            std::cout << "Monday" << std::endl;
            break;
        case 2:
            std::cout << "Tuesday" << std::endl;
            break;
        case 3:
            std::cout << "Wednesday" << std::endl;
            break;
        case 4://switch变量day与case中的常量相等，所以执行case 4中的语句
            std::cout << "Thursday" << std::endl;
            break;
        case 5:
            std::cout << "Friday" << std::endl;
            break;
        case 6:
            std::cout << "Saturday" << std::endl;
            break;
        case 7:
            std::cout << "Sunday" << std::endl;
            break;
        default:
            std::cout << "Invalid day" << std::endl;
    }

    return 0;
}
   