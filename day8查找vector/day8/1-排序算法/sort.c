#include "sort.h"

// 打印数组元素
void arr_print(int* a)
{
    int i;
    for (i = 0; i < N; i++)
    {
        printf("%3d", a[i]);
    }
    putchar('\n');
}

// 冒泡排序数组
void arr_bubble(int a[])
{
    int i, j, flag;
    for (i = N - 1; i > 0; i--)  // 外层循环控制排序轮数
    {
        flag = 1;
        for (j = 0; j < i; j++)  // 内层循环用于比较和交换相邻元素
        {
            if (a[j] > a[j + 1])
            {
                SWAP(a[j], a[j + 1])
                flag = 0;
            }
        }
        if (flag)
        {
            break;
        }
    }
}

// 选择排序数组
void arr_select(int* a)
{
    int i, j, min_pos;
    for (i = 0; i < N - 1; i++)  // 外层循环控制排序轮数
    {
        min_pos = i;
        for (j = i + 1; j < N; j++)  // 内层循环用于找到当前轮次的最小值位置
        {
            if (a[min_pos] > a[j])
            {
                min_pos = j;
            }
        }
        SWAP(a[i], a[min_pos]);
    }
}

// 插入排序数组
void arr_insert(int* a)
{
    int i, j, insert_val;
    for (i = 1; i < N; i++)
    {
        insert_val = a[i];// 记录当前需要插入的值
        for (j = i - 1; j >= 0; j--)
        {
            if (insert_val < a[j])
            {
                a[j + 1] = a[j];
            }
            else {
                break;
            }
        }
        a[j + 1] = insert_val;
    }
}

// 快速排序中的分区操作
int partition(int* arr, int left, int right)
{
    int i, k;// k用于指示当前分区的边界位置
    // 选取最右边的元素作为基准值，将小于基准值的元素移动到基准值的左边
    for (i = k = left; i < right; i++)
    {
        if (arr[i] < arr[right])
        {
            SWAP(arr[i], arr[k]);
            k++;
        }
    }
    SWAP(arr[k], arr[right]);
    return k;
}

// 快速排序数组
void arr_quick(int* arr, int left, int right)
{
    int pivot;
    if(left<right)
    { 
        pivot = partition(arr, left, right);// 确定分区的基准值位置
        arr_quick(arr, left, pivot - 1);
        arr_quick(arr, pivot + 1, right);
    }
}

// 比较函数，用于qsort函数
int compare(const void* p1, const void* p2)
{
    int* pleft = (int*)p1;
    int* pright = (int*)p2;
    if (*pleft > *pright)
    {
        return -1;
    }
    else if (*pleft < *pright)
    {
        return 1;
    }
    else {
        return 0;
    }
}

// 调整最大堆
void adjust_max_heap(int* arr, int adjust_pos, int arr_len)
{
    int dad = adjust_pos;// 父节点
    int son = 2 * dad + 1;// 左子节点
    while (son<arr_len)
    {
        // 如果右子节点存在且大于左子节点，则指向右子节点
        if (son + 1 < arr_len && arr[son] < arr[son + 1])
        {
            son++;
        }
        // 如果子节点大于父节点，则交换它们
        if (arr[son] > arr[dad])
        {
            SWAP(arr[son], arr[dad]);
            dad = son;// 将当前子节点作为父节点继续调整
            son = 2 * dad + 1;
        }
        else {
            break;
        }
    }
}

// 堆排序数组
void arr_heap(int* arr)
{
    // 建立最大堆
    int i;
    for (i = N / 2 - 1; i >= 0; i--)
    {
        adjust_max_heap(arr, i, N);
    }
    SWAP(arr[0], arr[N - 1]);// 将堆顶元素（最大值）与最后一个元素交换
    for (i = N - 1; i > 1; i--)
    {
        adjust_max_heap(arr, 0, i);// 调整剩余元素为最大堆
        SWAP(arr[0], arr[i - 1]);// 将堆顶元素与当前最后一个元素交换
    }
}

// 归并排序中的合并操作
void merge(int* arr, int low, int mid, int high)
{
    int b[N];
    // 将arr数组的元素复制到b
    int i, j, k;
    for (i = low; i <= high; i++)
    {
        b[i] = arr[i];
    }
    k = low;
    for(i=low,j=mid+1;i <= mid && j <= high;k++)
    {
        if (b[i] < b[j])
        {
            arr[k] = b[i];
            i++;
        }
        else {
            arr[k] = b[j];
            j++;
        }
    }
    while (i <= mid)
    {
        arr[k] = b[i];
        i++;
        k++;
    }
    while (j <= high)
    {
        arr[k] = b[j];
        j++;
        k++;
    }
}

// 归并排序数组
void merge_sort(int* arr, int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        merge_sort(arr, low, mid);
        merge_sort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

// 计数排序数组
void arr_count(int* arr)
{
    int count[M] = { 0 };
    // 统计arr数组中每个元素的出现次数
    int i;
    for (i = 0; i < N; i++)
    {
        count[arr[i]]++;
    }
    // 将统计结果重新放回原数组
    int j, k = 0;
    for (i = 0; i < M; i++)// 需要遍历的值的范围
    {
        for (j = 0; j < count[i]; j++)// 将对应值的元素按出现次数放回数组
        {
            arr[k] = i;
            k++;
        }
    }
}