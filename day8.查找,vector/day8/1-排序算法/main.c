#include "sort.h"

int main()
{
	//int arr[N];
	int* arr = (int*)malloc(N * sizeof(int));
	int i;
	//随机数
	srand(time(NULL));    
	for (i = 0; i < N; i++)
	{
		arr[i]=rand()%M;
	}
	time_t start, end;
	printf("start sort\n");
	start = time(NULL);//距离1970年1月1号
	//arr_print(arr);
	//arr_bubble(arr);
	//arr_select(arr);
	//arr_insert(arr);
	//arr_quick(arr, 0, N - 1);
	//qsort(arr, N, sizeof(int), compare);
	//arr_heap(arr);
	//merge_sort(arr, 0, N - 1);
	arr_count(arr);
	end = time(NULL);
	printf("use second=%d\n", end - start);
	//arr_print(arr);
	return 0;
}