/*#include<iostream>


bool bubbleDec(int a, int b)
{
	return a > b;
}
bool bubbleAsc(int a, int b)
{
	return a < b;
}


//ԭ����������С���ʹ���
void bubbleSort(int a[],int size,bool* sort_rule(int a,int b))
{
	bool isExchanged = false;
		for (int i = 0; i < size; i++)
		{
			isExchanged = false;
			for (int j = size - 1; j > i; j--)
			{
				if ((*sort_rule)(a[j] , a[j - 1]))//С�ķ�ǰ��
				{//����j,j-1
					int tmp = a[j];
					a[j] = a[j - 1];
					a[j - 1] = tmp;

					isExchanged = true;
				}
			}

		}
		if (!isExchanged)return;//δ����

}

//����
//ԭ��ѡ����׼����ʹ��������С�ڵ��ڻ�׼���Ҳ���������ڵ��ڻ�׼
template <typename T>
void quickSort(T a[], int left,int right, bool minTomax)
{

	if (minTomax)
	{//��С��������
		if (left > right)return;

		int l = left, r = right;
		T base = a[left], temp;
		//ʹl����������  <  r�����Ҳ����
		while (r > l)
		{
			//�ҵ���baseС����ͣ	
			while (r > l&& a[r] >= base)// >=��֤��׼�����ƶ�
			{
				r--;
			}
			while (r > l&& a[l] <= base)
			{
				l++;
			}
			//����a[l],a[r]
			temp = a[r];
			a[r] = a[l];
			a[l] = temp;
		}
		//��׼a[left]��λ,��ʱl��������<=al���Ҳ������>=al����alΪ��λ����
		a[left] = a[l];
		a[l] = base;

		quickSort(a, left, l - 1, minTomax);
		quickSort(a, l + 1, right, minTomax);
	}
	else
	{//�Ӵ�С
		if (left > right)return;
		int l = left, r = right;
		T base = a[left], temp;

		while (r > l)
		{
			//�ҵ���base�����ͣ	
			while (r > l&& a[r] <= base)
			{
				r--;
			}
			while (r > l&& a[l] >= base)
			{
				l++;
			}
			temp = a[l];
			a[l] = a[r];
			a[r] = temp;
		}
		a[left] = a[l];
		a[l] = base;

		quickSort(a, left, l - 1, minTomax);
		quickSort(a, l + 1, right, minTomax);

	}
	
}

//Ͱ����
void backetSort(int a[], int size, bool minTomax)
{
	//����Ͱ
}



//�������
template <typename T>
T* sort(T arr[], int size)
{
	quickSort(arr, 0, size - 1, true);
	return arr;
}

//int main()
//{
//	const int ARRSIZE = 10;
//	double arr[ARRSIZE]{ 10,13,2,245,9.5    ,9,11,9,8,27 };
//	//bubbleSort(arr,ARRSIZE,true);
//	quickSort(arr, 0, ARRSIZE - 1, false);
//
//	for (int i = 0; i < ARRSIZE; i++)
//	{
//		std::cout << arr[i]<<'\t';
//	}
//}


*/