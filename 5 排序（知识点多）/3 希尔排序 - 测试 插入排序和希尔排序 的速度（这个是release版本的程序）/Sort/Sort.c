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

	for (int i = 0; i < N; ++i)
	{
		a1[i] = rand();
		a2[i] = a1[i];
		a3[i] = a1[i];
		a4[i] = a1[i];
		a5[i] = a1[i];
		a6[i] = a1[i];

	}

	int begin1 = clock();
	InsertSort(a1, N);
	int end1 = clock();

	int begin2 = clock();
	ShellSort(a2, N);
	int end2 = clock();

	int begin3 = clock();
	//SelectSort(a3, N);
	int end3 = clock();

	int begin4 = clock();
	//HeapSort(a4, N);
	int end4 = clock();

	int begin5 = clock();
	//QuickSort(a5, 0, N - 1);
	int end5 = clock();

	int begin6 = clock();
	//MergeSort(a6, N);
	int end6 = clock();

	printf("InsertSort:%d\n", end1 - begin1);
	printf("ShellSort:%d\n", end2 - begin2);
	//printf("SelectSort:%d\n", end3 - begin3);
	//printf("HeapSort:%d\n", end4 - begin4);
	//printf("QuickSort:%d\n", end5 - begin5);
	//printf("MergeSort:%d\n", end6 - begin6);

	free(a1);
	free(a2);
	free(a3);
	free(a4);
	free(a5);
	free(a6);
}



int main()
{
	
	//TestShellSort();
	TestOP();

	return 0;
}