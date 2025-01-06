#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

#define N 100000000
#define M 100
#define SWAP(a,b) {int tmp;tmp=a;a=b;b=tmp;}

void arr_print(int* a);
void arr_bubble(int a[]);
void arr_select(int* a);
void arr_insert(int* a);
void arr_quick(int* arr, int left, int right);
void arr_heap(int* arr);
void merge_sort(int* arr, int low, int high);
int compare(const void* p1, const void* p2);
void arr_count(int* arr);