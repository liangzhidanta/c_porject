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
	for (i = N - 1; i > 0; i--)  //�����������������
	{
		flag = 1;
		for (j = 0; j < i; j++)  //�趨�Ƚϲ���
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
	for (i = 0; i < N - 1; i++)  //����������������
	{
		min_pos = i;
		for (j = i + 1; j < N; j++)  //�趨�Ƚϲ���
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
		insert_val = a[i];//����Ҫ�������
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
	int i, k;//kʼ��ָ��ȷָ�ֵС��Ԫ�أ�Ҫ�ŵ�λ��
	//���һ��λ�ã����Ǹ�λ�õ�Ԫ��ֵ����ָ�ֵ�Ƚ���
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
		pivot = partition(arr, left, right);//�ָ�ֵλ��ȷ����
		arr_quick(arr, left, pivot - 1);
		arr_quick(arr, pivot + 1, right);
	}
}

//p1��p2 ָ�������ڵ���������Ԫ��
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
	int dad = adjust_pos;//����
	int son = 2 * dad + 1;//����
	while (son<arr_len)
	{
		//�Һ��Ӵ洢���ж����Һ���˭��
		if (son + 1 < arr_len && arr[son] < arr[son + 1])
		{
			son++;
		}
		//�жϺ����븸�״�С
		if (arr[son] > arr[dad])
		{
			SWAP(arr[son], arr[dad]);
			dad = son;//�ú���������Ϊ���׼���
			son = 2 * dad + 1;
		}
		else {
			break;
		}
	}
}

void arr_heap(int* arr)
{
	//�Ѷѵ���Ϊ�����
	int i;
	for (i = N / 2 - 1; i >= 0; i--)
	{
		adjust_max_heap(arr, i, N);
	}
	SWAP(arr[0], arr[N - 1]);//�����Ѷ������һ��Ԫ��
	for (i = N - 1; i > 1; i--)
	{
		adjust_max_heap(arr, 0, i);//������������Ϊ�����
		SWAP(arr[0], arr[i - 1]);//���������� ��ǰ������������һ��Ԫ��
	}
}

void merge(int* arr, int low, int mid, int high)
{
	int b[N];
	//��arr��Ԫ�ض�����b
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
	//����arr��ͳ��ÿһ��Ԫ�س��ֵĴ���
	int i;
	for (i = 0; i < N; i++)
	{
		count[arr[i]]++;
	}
	//���ԭ����
	int j, k = 0;
	for (i = 0; i < M; i++)//Ҫ������ֵ��ʲô
	{
		for (j = 0; j < count[i]; j++)//��ӦԪ�س����˶��ٴ�
		{
			arr[k] = i;
			k++;
		}
	}
}