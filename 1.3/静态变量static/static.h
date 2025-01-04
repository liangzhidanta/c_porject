// 防止多重包含的宏定义，确保该头文件内容只被包含一次
#ifndef STATIC_H
#define STATIC_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
/**
 * 声明一个名为 func 的函数
 * 此函数没有参数，也不返回任何值
 * 其具体实现细节和用途应在相应的源文件中描述
 */
void func(void);

#endif // STATIC_H