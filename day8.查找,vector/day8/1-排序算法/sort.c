#include "sort.h"


void arr_print(int* a)
{
	int i;
	for (i = 0; i < N; i++)
	{
		printf("%3d", a[i]);
	}
	putchar('\n');
}


void arr_bubble(int a[])
{
	int i, j,flag;
	for (i = N - 1; i > 0; i--)  //外层是无序数的数量
	{
		flag = 1;
		for (j = 0; j < i; j++)  //设定比较策略
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

void arr_select(int* a)
{
	int i, j, min_pos;
	for (i = 0; i < N - 1; i++)  //控制无序数的数量
	{
		min_pos = i;
		for (j = i + 1; j < N; j++)  //设定比较策略
		{
			if (a[min_pos] > a[j])
			{
				min_pos = j;
			}
		}
		SWAP(a[i], a[min_pos]);
	}
}

void arr_insert(int* a)
{
	int i, j,insert_val;
	for (i = 1; i < N; i++)
	{
		insert_val = a[i];//保存要插入的数
		for (j = i-1; j >= 0; j--)
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

int partition(int* arr, int left, int right)
{
	int i, k;//k始终指向比分割值小的元素，要放的位置
	//随机一个位置，把那个位置的元素值，与分割值先交换
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


void arr_quick(int* arr, int left, int right)
{
	int pivot;
	if(left<right)
	{ 
		pivot = partition(arr, left, right);//分割值位置确定了
		arr_quick(arr, left, pivot - 1);
		arr_quick(arr, pivot + 1, right);
	}
}

//p1和p2 指向数组内的任意两个元素
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

void adjust_max_heap(int* arr, int adjust_pos, int arr_len)
{
	int dad = adjust_pos;//父亲
	int son = 2 * dad + 1;//左孩子
	while (son<arr_len)
	{
		//右孩子存储，判断左右孩子谁大
		if (son + 1 < arr_len && arr[son] < arr[son + 1])
		{
			son++;
		}
		//判断孩子与父亲大小
		if (arr[son] > arr[dad])
		{
			SWAP(arr[son], arr[dad]);
			dad = son;//让孩子重新作为父亲继续
			son = 2 * dad + 1;
		}
		else {
			break;
		}
	}
}

void arr_heap(int* arr)
{
	//把堆调整为大根堆
	int i;
	for (i = N / 2 - 1; i >= 0; i--)
	{
		adjust_max_heap(arr, i, N);
	}
	SWAP(arr[0], arr[N - 1]);//交换堆顶和最后一个元素
	for (i = N - 1; i > 1; i--)
	{
		adjust_max_heap(arr, 0, i);//调整顶部，变为大根堆
		SWAP(arr[0], arr[i - 1]);//交换顶部与 当前无序数组的最后一个元素
	}
}

void merge(int* arr, int low, int mid, int high)
{
	int b[N];
	//把arr中元素都放入b
	int i,j,k;
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

void arr_count(int* arr)
{
	int count[M] = { 0 };
	//遍历arr，统计每一个元素出现的次数
	int i;
	for (i = 0; i < N; i++)
	{
		count[arr[i]]++;
	}
	//回填到原数组
	int j, k = 0;
	for (i = 0; i < M; i++)//要填充的数值是什么
	{
		for (j = 0; j < count[i]; j++)//对应元素出现了多少次
		{
			arr[k] = i;
			k++;
		}
	}
}