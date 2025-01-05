/*
 * @Author: liangzhidanta_wsh 1652168492@qq.com
 * @Date: 2025-01-04 10:28:15
 * @LastEditors: liangzhidanta_wsh 1652168492@qq.com
 * @LastEditTime: 2025-01-04 11:13:31
 * @FilePath: \1.4\cpp\c++的引用.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
//使用c语言的指针来交换xy 
void swap1(int *px, int *py){
    int tmp = *px;
    *px = *py;
    *py = tmp;
}
//使用c++的引用来交换xy
void swap2(int &x, int &y){//引用是值类型，访问引用等价于访问指针，c语言中不能这么写
    int tmp = x; //x 是引用，访问 x 等价于*px
    x = y;
    y = tmp;
}
int main(){
    int x = 1, y = 2;
    swap1(&x,&y);//c语言中传入地址
    printf("x = %d, y = %d\n", x, y);
    swap2(x,y);  //c++中传入引用
    printf("x = %d, y = %d\n", x, y);
}
