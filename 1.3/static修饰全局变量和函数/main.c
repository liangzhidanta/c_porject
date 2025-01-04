/*
 * @Author: liangzhidanta_wsh 1652168492@qq.com
 * @Date: 2025-01-03 15:07:53
 * @LastEditors: liangzhidanta_wsh 1652168492@qq.com
 * @LastEditTime: 2025-01-03 15:14:55
 * @FilePath: \1.3\static修饰全局变量和函数\main.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */

/* 如果用 static 修饰全局变量，那么该全局变量将不能被 “其他文件” 引用，例如在 main.c 中的
int k;前加入 static，将语句改为 static int k;，那么 func.c 使用 extern int k 将无法编译通
过。如果用 static 修饰函数，那么该函数将不能被 “其他文件” 引用。 */
