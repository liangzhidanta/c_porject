/*
 * @Author: liangzhidanta_wsh 1652168492@qq.com
 * @Date: 2025-01-09 11:24:52
 * @LastEditors: liangzhidanta_wsh 1652168492@qq.com
 * @LastEditTime: 2025-01-10 08:33:05
 * @FilePath: \c_porject\day8.查找,vector\day8\1-排序算法\main.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "sort.h"

int main()
{
    // 动态分配一个整数数组的内存
    int* arr = (int*)malloc(N * sizeof(int));
    int i;
    
    // 初始化随机数生成器，使用当前时间作为种子以确保每次运行时生成不同的随机数
    srand(time(NULL));    
    for (i = 0; i < N; i++)
    {
        // 生成一个0到M-1之间的随机数并存储在数组中
        arr[i] = rand() % M;
    }
    
    // 记录排序开始和结束的时间
    time_t start, end;
    printf("start sort\n");
    start = time(NULL); // 开始计时
    
    // 调用排序函数
    // arr_print(arr);
    // arr_bubble(arr);
    // arr_select(arr);
    // arr_insert(arr);
    // arr_quick(arr, 0, N - 1);
    // qsort(arr, N, sizeof(int), compare);
    // arr_heap(arr);
    // merge_sort(arr, 0, N - 1);
    arr_count(arr);
    
    end = time(NULL); // 结束计时
    // 计算并打印排序所用的时间（秒）
    printf("use second=%d\n", end - start);
    
    // arr_print(arr);
    return 0;
}