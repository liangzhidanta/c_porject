/*
 * @Author: liangzhidanta_wsh 1652168492@qq.com
 * @Date: 2024-12-31 10:26:35
 * @LastEditors: liangzhidanta_wsh 1652168492@qq.com
 * @LastEditTime: 2024-12-31 14:54:37
 * @FilePath: \c_porject\pointer\character_pointers_asd_character_arrays.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
//字符指针与字符数组的初始化
#include <stdio.h>

int main()
{
    char *p = "hello";//把字符串型常量"hello world"的首地址赋给p
    char arr[] = "hello";//等价于strcpy(arr, "hello world");
    arr[0] = 'H';    //字符数组是可读写的，因为数据已经copy在栈空间
    //p[0] = 'H';    //字符串指针是只读的，修改会产生异常
    printf("%c\n", p[0]);
    printf("%c\n", arr[0]);
    printf("%s\n", p);  //%s：格式说明符，表示要输出的参数是一个字符串。
    printf("%s\n", arr);
    //第二种情况
    p = "world";        //合法
    printf("%s\n", p);
    //arr = "world";    //非法:表达式必须是可修改的左值(因为字符数组是常量)
    strcpy(arr, "world");//字符数组的改变需要使用strcpy函数
    puts(arr);
    return 0;
}
