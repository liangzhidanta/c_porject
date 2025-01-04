/*
 * @Author: liangzhidanta_wsh 1652168492@qq.com
 * @Date: 2024-12-29 10:42:25
 * @LastEditors: liangzhidanta_wsh 1652168492@qq.com
 * @LastEditTime: 2024-12-29 11:32:17
 * @FilePath: \c_porject\scanf_read\sacnf.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2;
    printf("please input a number: ");
    scanf("%d\n", &num1);
    getchar();//清除缓冲区

    printf("please input another number: ");
    scanf("%d\n", &num2);
    printf("the number what you input is: %d and %d\n", num1, num2);
    system("pause");
    return 0;
}




/* 使用 scanf 读取字符时的缓冲区残留
如果之前使用 scanf 读取了整数或其他数据，
缓冲区中可能残留换行符或其他字符，这会影
响后续的 scanf 读取字符的操作。 */
/* int main() {
    int num;
    char ch;
    printf("please input a number: ");
    scanf("%d", &num);
    printf("please input a character: ");
    scanf("%c", &ch);  // 可能读取到换行符
    printf("the number you input is: %d\n", num);
    printf("the chatacter you input is: %c\n", ch);
    system("pause");
    return 0;
} */

/* 问题：scanf("%c", &ch); 可能会读取到 scanf("%d", &num); 留下的换行符 \n，而不是用户输入的字符。 */
/* 解决方法：使用 getchar() 清除缓冲区中的残留字符 */

/* int main() {
    int num;
    char ch;
    printf("Please enter an integer: ");
    scanf("%d", &num);
    getchar();  // Clear the newline character from the buffer
    printf("Please enter a character: ");
    scanf("%c", &ch);
    printf("You entered the integer: %d\n", num);
    printf("You entered the character: %c\n", ch);
    system("pause");
    return 0;
} */