#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//֪ʶ��1����������

//���趼������������������Ƿ�����

//�������û��д�꣬���������
//void PrintArray(int* a, int n)
//{
//	for (int i = 0; i < n; ++i)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//}
//
////��������
//void InsertSort(int* a, int n)
//{
//	//[0,end]����end+1λ�õ�ֵ����[0��end],��[0,end+1]����
//
//		//5 | 2 4 6 1 3
//		//2 5 | 4 6 1 3
//		//2 4 5 | 6 1 3
//		//2 4 5 6 | 1 3
//		//1 2 4 5 6 | 3
//		//1 2 3 4 5 6
//		int end;
//		int tmp = a[end + 1];//Ҫ��end+1�ȱ�����������Ϊ���end+1��ǰ��end��ֵС����ôend��ֵҪ�����ƶ���end+1��λ���ϣ����end+1��ֵ���ǵ�
//		while (end >= 0)
//		{
//			if (a[end]>tmp)//���Ҫ�����end + 1λ�ô���ֵtmp��endλ�ô���ֵҪС����endλ�õ��������ƶ���end+1λ���ϣ�ͬʱendҪ--
//			{
//				a[end + 1] = a[end];
//				--end;
//			}
//			else
//			{
//				break;//�������ǰ�end+1λ�ô���ֵtmp�嵽�м��λ�ã�else����û��д��������Ϊ����д��һ������a[end + 1] = tmp
//			}
//		}
//		//����whileѭ��������ֵ�����ǣ�end+1λ�ô���ֵtmp�嵽��ǰ��
//		a[end + 1] = tmp;//������д��̫ţ���ˣ���������������������1 ��end+1λ�ô���ֵtmp�嵽�м��λ�� 
//		//2  end+1λ�ô���ֵtmp�嵽��ǰ��
//
//}
//
//
//void TestInsertSort()
//{
//	int a[] = { 3, 5, 2, 7, 8, 6, 1, 9, 4, 0 };
//	InsertSort(a, sizeof(a) / sizeof(int));
//	PrintArray(a, sizeof(a) / sizeof(int));
//
//}
//
//int main()
//{
//
//	TestInsertSort();
//
//	return 0;
//}



//������������⣬��i<n-1д��i<n��
//void PrintArray(int* a, int n)
//{
//	for (int i = 0; i < n; ++i)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//}
//
////��������
//void InsertSort(int* a, int n)
//{
//	//[0,end]����end+1λ�õ�ֵ����[0��end],��[0,end+1]����
//	for (int i = 0; i < n; ++i)//i<n�������д���ˣ�Ӧ��д�� i < n-1 
//	{
//		//5 | 2 4 6 1 3
//		//2 5 | 4 6 1 3
//		//2 4 5 | 6 1 3
//		//2 4 5 6 | 1 3
//		//1 2 4 5 6 | 3
//		//1 2 3 4 5 6
//		int end = i;
//		int tmp = a[end + 1];//Ҫ��end+1�ȱ�����������Ϊ���end+1��ǰ��end��ֵС����ôend��ֵҪ�����ƶ���end+1��λ���ϣ����end+1��ֵ���ǵ�
//		                     //����i<n��˵��i������ȡ��n-1,��end������ȡ��n-1,��ʱint tmp = a[end + 1]=a[n-1+1]=a[n],��Ϊ����ֻ��n��Ԫ�أ������
//		                     //�±��Ǵ�0��ʼ�ģ���������±�Ӧ����n-1,�����һ������Ԫ����a[n-1],�������ǲ��Եģ�����ʱ�����һ�����ֵ
//		while (end >= 0)
//		{
//			if (a[end]>tmp)//���Ҫ�����end + 1λ�ô���ֵtmp��endλ�ô���ֵҪС����endλ�õ��������ƶ���end+1λ���ϣ�ͬʱendҪ--
//			{
//				a[end + 1] = a[end];
//				--end;
//			}
//			else
//			{
//				break;//�������ǰ�end+1λ�ô���ֵtmp�嵽�м��λ�ã�else����û��д��������Ϊ����д��һ������a[end + 1] = tmp
//			}
//		}
//		//����whileѭ��������ֵ�����ǣ�end+1λ�ô���ֵtmp�嵽��ǰ��
//		a[end + 1] = tmp;//������д��̫ţ���ˣ���������������������1 ��end+1λ�ô���ֵtmp�嵽�м��λ�� 
//		                                                             //2  end+1λ�ô���ֵtmp�嵽��ǰ��
//	}
//}
//
//
//void TestInsertSort()
//{
//	int a[] = { 3, 5, 2, 7, 8, 6, 1, 9, 4, 0 };
//	InsertSort(a,sizeof(a)/sizeof(int));
//	PrintArray(a, sizeof(a) / sizeof(int));
//
//}
//
//int main()
//{
//	
//	TestInsertSort();
//
//	return 0;
//}





//////��������
//////ʱ�临�Ӷ�ΪO��n^2��
//////ʲô��������   ����   1+2+3+...+n-1    O��n^2��
//////ʲô�������ã�   ˳������    O��n��
////void InsertSort(int* a, int n)
////{
////	//[0,end]����end+1λ�õ�ֵ����[0��end],��[0,end+1]����
////	for (int i = 0; i < n - 1; ++i)//i<n-1   ���������Ҫд�� i < n ��
////	{
////		//5 | 2 4 6 1 3
////		//2 5 | 4 6 1 3
////		//2 4 5 | 6 1 3
////		//2 4 5 6 | 1 3
////		//1 2 4 5 6 | 3
////		//1 2 3 4 5 6
////		int end = i;
////		int tmp = a[end + 1];//Ҫ��end+1�ȱ�����������Ϊ���end+1��ǰ��end��ֵС����ôend��ֵҪ�����ƶ���end+1��λ���ϣ����end+1��ֵ���ǵ�
////		while (end >= 0)
////		{
////			if (a[end]>tmp)//���Ҫ�����end + 1λ�ô���ֵtmp��endλ�ô���ֵҪС����endλ�õ��������ƶ���end+1λ���ϣ�ͬʱendҪ--
////			{
////				a[end + 1] = a[end];
////				--end;
////			}
////			else
////			{
////				break;//�������ǰ�end+1λ�ô���ֵtmp�嵽�м��λ�ã�else����û��д��������Ϊ����д��һ������a[end + 1] = tmp
////			}
////		}
////		//���whileѭ����������������,1 ��end+1λ�ô���ֵtmp�嵽�м��λ��  2 end+1λ�ô���ֵtmp�嵽��ǰ��
////		//����whileѭ������ʱend=-1,����ֵ�����ǣ�end+1λ�ô���ֵtmp�嵽��ǰ��
////		a[end + 1] = tmp;//������д��̫ţ���ˣ���������������������1 ��end+1λ�ô���ֵtmp�嵽�м��λ�� 
////		                                                             //2 end+1λ�ô���ֵtmp�嵽��ǰ��
////	}
////}


//֪ʶ��2��ϣ������
//ʱ�临�Ӷȣ�O��logN*N������O��log3N*N��             logN����2Ϊ�׵Ķ�����    log3N����3Ϊ�׵Ķ�����
//ƽ����ʱ�临�Ӷȣ�O��N^1.3��


//ϣ������
//ֱ�Ӳ�������Ļ����ϵ��Ż�
//1 �Ƚ���Ԥ����������ӽ�����
//2 ֱ�Ӳ�������
   
//Ԥ���򣺷�����
//���Ϊgap��һ��
//����gap==3

//������Ϊgap��Ԥ����gap�ɴ��С
//  gapԽ�󣬴��������Խ��ĵ�����
//           С��������Խ��ĵ�ǰ��
//  gapԽ��Ԥ������Խ���ӽ�����

//  gapԽС��Ԥ������Խ�ӽ�����

//  gap==1������ֱ�Ӳ�������




//�������û����

#include <time.h>
#include <stdlib.h>

void PrintArray(int* a, int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}


void InsertSort(int* a, int n)
{
	//[0,end]����end+1λ�õ�ֵ����[0��end],��[0,end+1]����
	for (int i = 0; i < n - 1; ++i)//i<n-1   ���������Ҫд�� i < n ��
	{
		//5 | 2 4 6 1 3
		//2 5 | 4 6 1 3
		//2 4 5 | 6 1 3
		//2 4 5 6 | 1 3
		//1 2 4 5 6 | 3
		//1 2 3 4 5 6
		int end = i;
		int tmp = a[end + 1];//Ҫ��end+1�ȱ�����������Ϊ���end+1��ǰ��end��ֵС����ôend��ֵҪ�����ƶ���end+1��λ���ϣ����end+1��ֵ���ǵ�
		while (end >= 0)
		{
			if (a[end]>tmp)//���Ҫ�����end + 1λ�ô���ֵtmp��endλ�ô���ֵҪС����endλ�õ��������ƶ���end+1λ���ϣ�ͬʱendҪ--
			{
				a[end + 1] = a[end];
				--end;
			}
			else
			{
				break;//�������ǰ�end+1λ�ô���ֵtmp�嵽�м��λ�ã�else����û��д��������Ϊ����д��һ������a[end + 1] = tmp
			}
		}
		//���whileѭ����������������,1 ��end+1λ�ô���ֵtmp�嵽�м��λ��  2 end+1λ�ô���ֵtmp�嵽��ǰ��
		//����whileѭ������ʱend=-1,����ֵ�����ǣ�end+1λ�ô���ֵtmp�嵽��ǰ��
		a[end + 1] = tmp;//������д��̫ţ���ˣ���������������������1 ��end+1λ�ô���ֵtmp�嵽�м��λ�� 
		                                                             //2 end+1λ�ô���ֵtmp�嵽��ǰ��
	}
}

void ShellSort(int* a,int n)
{
	int gap = n;

	while (gap > 1)
	{
		gap = gap / 2;                           //logN����2Ϊ�׵Ķ�����
		//gap = gap / 3 + 1;//Ҳ����д����       //log3N����3Ϊ�׵Ķ�����

		//gap>1ʱ����Ԥ����          �ӽ�����
		//gap==1ʱ����ֱ�Ӳ�������   ����


		//gap�ܴ�ʱ������Ԥ����ʱ�临�Ӷ�O��N��
		//gap��Сʱ�������Ѿ��ӽ������ˣ���ʱ���Ҳ��O��N��

		//�Ѽ��Ϊgap�Ķ�������ͬʱ��
		for (int i = 0; i < n - gap; ++i)
		{
			int end = i;
			int tmp = a[end + gap];
			while (end >= 0)
			{
				if (a[end] > tmp)
				{
					a[end + gap] = a[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}

			a[end + gap] = tmp;
		}
	}
}


void TestShellSort()
{
	int a[] = { 3, 5, 2, 7, 8, 6, 1, 9, 4, 0 };
	ShellSort(a, sizeof(a) / sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));
}


void Swap(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

//��С��
//���µ����㷨
//ǰ�᣺������������С��       �������ǰ�����������㷨

//�Ӹ��ڵ㿪ʼ
//ѡ�����Һ�����С����һ���������ױȽϣ�����ȸ���С�ͽ���
//Ȼ���ټ������µ�������Ҷ�Ӿ�ֹͣ
void AdjustDown(int* a, int n, int root)
{
	int parent = root;//���׵��±���root
	int child = parent * 2 + 1;//Ĭ��������     ���ݹ�ʽ������chlid = parent * 2 + 1
	while (child < n)
	{
		//1 ѡ�����Һ����д����һ��
		if (child+1<n && a[child+1] > a[child])//�Һ���a[child+1]С������a[child]
		{
			child += 1;//���ӽ��м�1����������+1�ͱ�����Һ���
		}
		//�����ߵ����˵���Һ���a[child+1]���ڻ��������a[child]

		//����
		if (a[child] > a[parent])
		{
			Swap(&a[child],&a[parent]);//��С�Ļ�������parent
			parent = child;//���ӻ�������parent��λ��
			child = parent * 2 + 1;//���׻������ӵ�λ�ã�child��parent�Ĺ�ϵ�ǣ�child = parent * 2 + 1��
		}
		else
		{
			break;
		}
	}
}

//ע�⣺������������С�ѣ��Ͳ���ֱ��ʹ�����µ����㷨�ˣ���ô�죿
//    ���Ŵ����һ��������ʼ��
//    �ٷ��������ߣ�Ҷ��Ҳ����Ҫ�����ӵ������һ����Ҷ�ӵ�������ʼ��

//n-1�����һ�����ӽڵ���±꣬�ټ�1��2���Ǹ��׽ڵ㣬����n-1-1��/2�Ǹ��׽ڵ㣨��ʽchild=parent*2+1�ɵõ�����iҪ���ڻ����0,��--i
//       for(int i=(n-1-1)/2;i>=0;--i)
//       {
//           AdjustDown(a,n,i);
//       }


//���򣬽�С�ѣ����Ǵ�ѣ� -> ���
//����ʱ�临�Ӷȣ�O��N*logN��
void HeapSort(int* a, int n)
{
	//���ѣ����ɴ�ѻ�С�ѣ�   �����Խ�С��Ϊ��
	for(int i=(n-1-1)/2;i>=0;--i)
	{
		AdjustDown(a, n, i);
	}//������������
	//�����򣬽���ѻ���С�ѣ� Ҫ�����   ����С�ѣ�Ч��̫�ͣ����ҽ���ѡ����������ֱ�ӱ���ѡ����
	int end = n - 1;
	while (end > 0)
	{
		Swap(&a[0], &a[end]);
		AdjustDown(a, end, 0);
		--end;
	}
}

//ֱ��ѡ������          ʱ�临�Ӷȣ�O��N^2��
//�ܲ��Ϊ������Ҳ��O��N^2��
//N
//N-2
//N-4
//...
void SelectSort(int* a, int n)
{
	int begin = 0, end = n - 1;//begin=0�������һ��Ԫ�ص��±�   begin=n-1���������һ��Ԫ�ص��±�
	while (begin < end)//����ǰ��Ԫ�ص��±�С�ں���Ԫ�ص��±�ʱ��ѭ������
	{
		int mini = begin, maxi = begin;
		for (int i = begin; i <= end; ++i)
		{
			if (a[i] < a[mini])
			{
				mini = i;//ѡ����С��Ԫ�ص��±�
			}
			if (a[i]>a[maxi])
			{
				maxi = i;//ѡ������Ԫ�ص��±�
			}
		}


		Swap(&a[begin], &a[mini]);//��С�Ļ������
		//���begin��maxi�ص�����Ҫ����һ��maxi��λ��
		if (begin == maxi)
		{
			maxi = mini;
		}

		Swap(&a[maxi], &a[end]);//���Ļ����ұ�

		++begin;
		--end;
	}
}

void TestHeapSort()
{
	int a[] = { 3, 5, 2, 7, 8, 6, 1, 9, 4, 0 };
	HeapSort(a, sizeof(a) / sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));
}


void TestSelectSort()
{
	int a[] = {9, 3, 5, 2, 7, 8, 6, -1, 9, 4, 0 };
	SelectSort(a, sizeof(a) / sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));
}


//ð������
//ʱ�临�Ӷȣ�O��N^2��
//��������O��N��
//N-1
//N-2
//...
//��ֱ�Ӳ���������ȣ�˭����-��ֱ�Ӳ������
void BubbleSort(int* a, int n)
{
	for (int j = 0; j < n; j++)
	{
		int exchange = 0;
		for (int i = 1; i < n-j; ++i)
		{
			if (a[i - 1]>a[i])
			{
				Swap(&a[i - 1], &a[i]);
				exchange = 1;
			}
		}
		if (exchange == 0)
		{
			break;
		}
	}

	//������һ�γ���Ҳ��������һ�γ�����ʵ��
	//for (int j = 0; j < n-1; j++)
	//{
	//	for (int i = 0; i < n - 1 - j; ++i)
	//	{
	//		if (a[i]>a[i+1])
	//		{
	//			Swap(&a[i], &a[i+1]);
	//		}
	//	}
	//}

	//������һ�γ���Ҳ��������һ�γ�����ʵ��
	//int end = n;
	//while (end > 0)
	//{
	//	for (int i = 1; i < end; ++i)
	//	{
	//		if (a[i - 1]>a[i])
	//		{
	//			Swap(&a[i - 1], &a[i]);
	//		}
	//	}
	//	--end;
	//}

}


void TestBubbleSort()
{
	int a[] = { 9, 3, 5, 2, 7, 8, 6, -1, 9, 4, 0 };
	BubbleSort(a, sizeof(a) / sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));
}


//����ȡ��     ȡ3�����е��м�ֵ
int GetMidIndex(int* a, int left, int right)
{
	//��������Ҫȡ�������Ҳ������С���Ǹ�
	int mid = (left + right) >> 1;//��������� int mid = (left + right)/2;
	//����1λ���ڳ�2,�������£�
	//1000   8
	//0100   4
	//0010   2
	//0001   1
	if (a[left]<a[mid])
	{
		if (a[mid] < a[right])
		{
			return mid;
		}
		else if (a[left]>a[right])
		{
			return left;
		}
		else
		{
			return right;
		}
	}
	else//a[left]>a[mid]
	{
		if (a[mid] > a[right])
		{
			return mid;
		}
		else if (a[left] < a[right])
		{
			return left;
		}
		else
		{
			return right;
		}
	}
}

//�ڿӷ�
int PartSort1(int* a, int left, int right)
{
	int index = GetMidIndex(a, left, right);
	Swap(&a[left], &a[index]);

	int begin = left, end = right;//����±�begin����0���ұ��±�end����n-1
	int pivot = begin;//����ѡ��ߵ����ӣ�����һ��λ���γ�һ����
	int key = a[begin];//�ؼ���key����ߵ�����������
	//����һ��λ���γ�һ����
	while (begin < end)
	{
		//�ұ���С���ŵ���ߵĿ�λ
		while (begin < end && a[end] >= key)//��ΪҪ��С�����Ա�key�󣬼���ִ��whileѭ������keyС��ͣ����
		{
			--end;//��ΪҪ��С�����Ա�key�󣬼���ִ��whileѭ��
		}
		//�����ߵ����˵��a[end]<key
		a[pivot] = a[end];//���ұ��ҵ���С�ŵ���ߵĿ�pivot  (С�ķŵ���ߵĿ����� ���Լ��γ����µĿ�λ)
		pivot = end;//С�ķŵ���ߵĿ����� ���Լ��γ����µĿ�λ,�ұ��γ����µĿ�λ���γɵĿ�λ�����ұߵģ�

		//����Ҵ󣬷ŵ��ұ߿�λ
		while (begin < end && a[begin] <= key)//��ΪҪ�Ҵ�����С��keyʱ������ִ�� whileѭ������key��ʱ��ͣ����
		{
			++begin; // ��ΪҪ�Ҵ�����С��keyʱ������ִ�� whileѭ����
		}
		//�����ߵ����˵��a[begin > key
		a[pivot] = a[begin];//������ҵ��Ĵ�ŵ��ұߵĿ�pivot  (��ķŵ��ұߵĿ����� ���Լ��γ����µĿ�λ)
		pivot = begin;//��ķŵ��ұߵĿ����� ���Լ��γ����µĿ�λ,����γ����µĿ�λ���γɵĿ�λ������ߵģ�
	}

	pivot = begin;//begin��end������λ�þ������Ŀӵ�λ�ã�Ҳ����дΪpivot = end;  ��Ϊ��ʱbegin==end
	a[pivot] = key;//��key�ŵ����Ŀ�����

	return pivot;
}


//����ָ�뷨     ���ڿӷ��ı��Σ����ڿӷ��ǳ����ƣ�
int PartSort2(int* a, int left, int right)
{
	int index = GetMidIndex(a, left, right);
	Swap(&a[left], &a[index]);

	int begin = left, end = right;//����±�begin����0���ұ��±�end����n-1
	int keyi = begin;//�ؼ���keyi����ߵ�����������

	while (begin < end)//����±�beginС���ұ��±�endʱ��ѭ������
	{
		//��С
		while (begin < end && a[end] >= a[keyi])//����±�beginС���ұ��±�end������a[end] >= a[keyi]ʱ��ѭ������
		{
			--end;
		}

		//�Ҵ�
		while (begin < end && a[begin] <= a[keyi])//����±�beginС���ұ��±�end������a[end] >= a[keyi]ʱ��ѭ������
		{
			++begin;
		}

		Swap(&a[begin], &a[end]);
	}
	//�����ߵ����˵��begin��end����,˵��begin����end,��begin==end,��ʱ����begin��keyi
	Swap(&a[begin], &a[keyi]);

	return begin;//����������λ��begin��������λ��Ҳ����keyiҪ���õ�λ��
}



//ǰ��ָ�뷨
int PartSort3(int* a, int left, int right)
{
	int index = GetMidIndex(a, left, right);
	Swap(&a[left], &a[index]);

	int keyi = left;//����ߵ�left��keyi
	int prev = left, cur = left + 1;//prevָ������ߵ�����curָ������ߵĵ�2����
	while (cur <= right)//curָ������ߵĵ�2����С�ڻ�������ұߵ���rightʱ��ѭ������  	                
	{
		if (a[cur] < a[keyi])//��С   ������Ҳ����дΪ��if (a[cur] < a[keyi] && ++prev!=cur),���Է�ֹ�Լ����Լ�����
			                 //if (a[cur] < a[keyi])--�Լ�����Լ��������Լ����Լ����������û��Ҫ
							 //if (a[cur] < a[keyi] && ++prev!=cur),���Է�ֹ�Լ����Լ�����
		{
			++prev;
			Swap(&a[prev],&a[cur]);//����a[prev]��a[cur]
		}
		++cur;
	}
	//�����ߵ����˵��whileѭ������

	Swap(&a[keyi], &a[prev]);//���Ҫ����a[keyi]��&a[prev]

	return prev;//����prev
}




//��������--�ڿӷ� 
//ʱ�临�Ӷȣ�O��N*logN��
void QuickSort(int* a, int left,int right)
{
	if (left >= right)
	{
		return;
	}

	int keyIndex = PartSort3(a,left,right);

	//[left,right]
	//[left,keyIndex] keyIndex [keyIndex+1,right]
	//������������������������Ǿ������ˣ���������������أ�  ʹ�� ���εݹ� ʵ��


	//С�����Ż�����
	if (keyIndex - 1 - left > 10)//С�����Ż�
	{
		QuickSort(a, left, keyIndex - 1);
	}
	else
	{
		InsertSort(a + left, keyIndex - 1 - left + 1);
	}

	if (right - (keyIndex + 1) > 10)//С�����Ż�
	{
		QuickSort(a, keyIndex + 1, right);
	}
	else
	{
		InsertSort(a + keyIndex + 1, right - (keyIndex + 1) + 1);
	}
	
	

}

void TestQuickSort()
{
	//int a[] = { 6, 3, 5, 2, 7, 8, 9, 4, 1 };
	int a[] = { 49, 38, 65, 97, 76, 13, 27, 49, 13, 27, 49 };
	QuickSort(a, 0, sizeof(a) / sizeof(int)-1);
	PrintArray(a, sizeof(a) / sizeof(int));
}


void _MergeSort(int* a, int left, int right, int* tmp)
{
	if (left >= right)//left>right����������ǲ����ڵģ�left==right  �������ֻ��һ������һ��������Ҫ�鲢
		return;

	int mid = (left + right) >> 1;//��������� int mid = (left + right)/2;
	//����[left,mid] [mid+1,right] ������ô���ǾͿ��Թ鲢��

	//����1λ���ڳ�2,�������£�
	//1000   8
	//0100   4
	//0010   2
	//0001   1

	//�鲢
	_MergeSort(a, left, mid, tmp);
	_MergeSort(a, mid+1, right, tmp);

	int begin1 = left, end1 = mid;
	int begin2 = mid + 1, end2 = right;
	int index = left;
	while (begin1 <= end1 && begin2 <= end2)
	{
		if (a[begin1] < a[begin2])
		{
			tmp[index++] = a[begin1++];
		}
		else
		{
			tmp[index++] = a[begin2++];
		}
	}

	while (begin1 <= end1)
	{
		tmp[index++] = a[begin1++];
	}

	while (begin2 <= end2)
	{
		tmp[index++] = a[begin2++];
	}


	//������ȥ
	for (int i = left; i <= right; ++i)
	{
		a[i] = tmp[i];
	}


}


//�鲢����
void MergeSort(int* a, int n)
{
	int* tmp = (int*)malloc(sizeof(int)*n);
	_MergeSort(a, 0, n - 1, tmp);
	free(tmp);
}


void TestMergeSort()
{
	int a[] = { 10, 6, 7, 1, 3, 9, 4, 2 };
	MergeSort(a, sizeof(a) / sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));
}



// ������������ܶԱ�
void TestOP()
{
	srand(time(0));
	const int N = 100000;
	int* a1 = (int*)malloc(sizeof(int)*N);
	int* a2 = (int*)malloc(sizeof(int)*N);
	int* a3 = (int*)malloc(sizeof(int)*N);
	int* a4 = (int*)malloc(sizeof(int)*N);
	int* a5 = (int*)malloc(sizeof(int)*N);
	int* a6 = (int*)malloc(sizeof(int)*N);
	int* a7 = (int*)malloc(sizeof(int)*N);

	for (int i = 0; i < N; ++i)
	{
		a1[i] = rand();
		a2[i] = a1[i];
		a3[i] = a1[i];
		a4[i] = a1[i];
		a5[i] = a1[i];
		a6[i] = a1[i];
		a7[i] = a1[i];

	}

	int begin1 = clock();
	InsertSort(a1, N);
	int end1 = clock();

	int begin2 = clock();
	ShellSort(a2, N);
	int end2 = clock();

	int begin3 = clock();
	SelectSort(a3, N);
	int end3 = clock();

	int begin4 = clock();
	HeapSort(a4, N);
	int end4 = clock();

	int begin5 = clock();
	QuickSort(a5, 0, N - 1);
	int end5 = clock();

	int begin6 = clock();
	//MergeSort(a6, N);
	int end6 = clock();

	int begin7 = clock();
	BubbleSort(a7, N);
	int end7 = clock();

	printf("InsertSort:%d\n", end1 - begin1);
	printf("ShellSort:%d\n", end2 - begin2);
	printf("SelectSort:%d\n", end3 - begin3);
	printf("HeapSort:%d\n", end4 - begin4);
	printf("BubbleSort:%d\n", end7 - begin7);
	printf("QuickSort:%d\n", end5 - begin5);
	//printf("MergeSort:%d\n", end6 - begin6);

	free(a1);
	free(a2);
	free(a3);
	free(a4);
	free(a5);
	free(a6);
	free(a7);
}



int main()
{
	
	//TestShellSort();
	//TestOP();
	//TestHeapSort();
	//TestSelectSort();
	//TestBubbleSort();
	//TestQuickSort();
	TestMergeSort();


	return 0;
}