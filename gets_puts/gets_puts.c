/*
 * @Author: liangzhidanta_wsh 1652168492@qq.com
 * @Date: 2024-12-30 09:32:48
 * @LastEditors: liangzhidanta_wsh 1652168492@qq.com
 * @LastEditTime: 2025-01-01 18:36:10
 * @FilePath: \4.短视频项目d:\c_porject\gets_puts\gets_puts.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
#include <stdlib.h>

//scanf与gets函数的区别：scanf不会读取换行符，gets会读取换行符
int main()
{
    char buf[64];
    gets(buf);  //一次读取一行，gets放了结束符
    puts(buf);  //输出buf
    system("pause");
    return 0;
}





