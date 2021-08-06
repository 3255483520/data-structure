#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//知识点1：插入排序

//假设都用升序来讲，降序就是反过来

//这个程序还没有写完，是有问题的
//void PrintArray(int* a, int n)
//{
//	for (int i = 0; i < n; ++i)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//}
//
////插入排序
//void InsertSort(int* a, int n)
//{
//	//[0,end]有序，end+1位置的值插入[0，end],让[0,end+1]有序
//
//		//5 | 2 4 6 1 3
//		//2 5 | 4 6 1 3
//		//2 4 5 | 6 1 3
//		//2 4 5 6 | 1 3
//		//1 2 4 5 6 | 3
//		//1 2 3 4 5 6
//		int end;
//		int tmp = a[end + 1];//要把end+1先保存起来，因为如果end+1比前面end的值小，那么end的值要往后移动到end+1的位置上，会把end+1的值覆盖掉
//		while (end >= 0)
//		{
//			if (a[end]>tmp)//如果要插入的end + 1位置处的值tmp比end位置处的值要小，把end位置的数往后移动到end+1位置上，同时end要--
//			{
//				a[end + 1] = a[end];
//				--end;
//			}
//			else
//			{
//				break;//这个情况是把end+1位置处的值tmp插到中间的位置，else里面没有写程序，是因为可以写成一个代码a[end + 1] = tmp
//			}
//		}
//		//跳出while循环，会出现的情况是：end+1位置处的值tmp插到最前面
//		a[end + 1] = tmp;//（这种写法太牛逼了）这句代码包含了两种情况，1 把end+1位置处的值tmp插到中间的位置 
//		//2  end+1位置处的值tmp插到最前面
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



//这个程序有问题，把i<n-1写成i<n了
//void PrintArray(int* a, int n)
//{
//	for (int i = 0; i < n; ++i)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//}
//
////插入排序
//void InsertSort(int* a, int n)
//{
//	//[0,end]有序，end+1位置的值插入[0，end],让[0,end+1]有序
//	for (int i = 0; i < n; ++i)//i<n这个条件写错了，应该写成 i < n-1 
//	{
//		//5 | 2 4 6 1 3
//		//2 5 | 4 6 1 3
//		//2 4 5 | 6 1 3
//		//2 4 5 6 | 1 3
//		//1 2 4 5 6 | 3
//		//1 2 3 4 5 6
//		int end = i;
//		int tmp = a[end + 1];//要把end+1先保存起来，因为如果end+1比前面end的值小，那么end的值要往后移动到end+1的位置上，会把end+1的值覆盖掉
//		                     //上面i<n，说明i最大可以取到n-1,即end最大可以取到n-1,此时int tmp = a[end + 1]=a[n-1+1]=a[n],因为数组只有n个元素，数组的
//		                     //下标是从0开始的，所以最大下标应该是n-1,即最后一个数组元素是a[n-1],所以这是不对的，排序时会进入一个随机值
//		while (end >= 0)
//		{
//			if (a[end]>tmp)//如果要插入的end + 1位置处的值tmp比end位置处的值要小，把end位置的数往后移动到end+1位置上，同时end要--
//			{
//				a[end + 1] = a[end];
//				--end;
//			}
//			else
//			{
//				break;//这个情况是把end+1位置处的值tmp插到中间的位置，else里面没有写程序，是因为可以写成一个代码a[end + 1] = tmp
//			}
//		}
//		//跳出while循环，会出现的情况是：end+1位置处的值tmp插到最前面
//		a[end + 1] = tmp;//（这种写法太牛逼了）这句代码包含了两种情况，1 把end+1位置处的值tmp插到中间的位置 
//		                                                             //2  end+1位置处的值tmp插到最前面
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





//////插入排序
//////时间复杂度为O（n^2）
//////什么情况下最坏？   逆序   1+2+3+...+n-1    O（n^2）
//////什么情况下最好？   顺序有序    O（n）
////void InsertSort(int* a, int n)
////{
////	//[0,end]有序，end+1位置的值插入[0，end],让[0,end+1]有序
////	for (int i = 0; i < n - 1; ++i)//i<n-1   这个条件不要写成 i < n 了
////	{
////		//5 | 2 4 6 1 3
////		//2 5 | 4 6 1 3
////		//2 4 5 | 6 1 3
////		//2 4 5 6 | 1 3
////		//1 2 4 5 6 | 3
////		//1 2 3 4 5 6
////		int end = i;
////		int tmp = a[end + 1];//要把end+1先保存起来，因为如果end+1比前面end的值小，那么end的值要往后移动到end+1的位置上，会把end+1的值覆盖掉
////		while (end >= 0)
////		{
////			if (a[end]>tmp)//如果要插入的end + 1位置处的值tmp比end位置处的值要小，把end位置的数往后移动到end+1位置上，同时end要--
////			{
////				a[end + 1] = a[end];
////				--end;
////			}
////			else
////			{
////				break;//这个情况是把end+1位置处的值tmp插到中间的位置，else里面没有写程序，是因为可以写成一个代码a[end + 1] = tmp
////			}
////		}
////		//这个while循环有两种情况会结束,1 把end+1位置处的值tmp插到中间的位置  2 end+1位置处的值tmp插到最前面
////		//跳出while循环，此时end=-1,会出现的情况是：end+1位置处的值tmp插到最前面
////		a[end + 1] = tmp;//（这种写法太牛逼了）这句代码包含了两种情况，1 把end+1位置处的值tmp插到中间的位置 
////		                                                             //2 end+1位置处的值tmp插到最前面
////	}
////}


//知识点2：希尔排序
//时间复杂度：O（logN*N）或者O（log3N*N）             logN（以2为底的对数）    log3N（以3为底的对数）
//平均的时间复杂度：O（N^1.3）


//希尔排序
//直接插入排序的基础上的优化
//1 先进行预排序，让数组接近有序
//2 直接插入排序
   
//预排序：分组排
//间隔为gap是一组
//假设gap==3

//多组间隔为gap的预排序，gap由大变小
//  gap越大，大的数可以越快的到后面
//           小的数可以越快的到前面
//  gap越大，预排序完越不接近有序

//  gap越小，预排序完越接近有序

//  gap==1，就是直接插入排序




//这个程序没问题

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
	//[0,end]有序，end+1位置的值插入[0，end],让[0,end+1]有序
	for (int i = 0; i < n - 1; ++i)//i<n-1   这个条件不要写成 i < n 了
	{
		//5 | 2 4 6 1 3
		//2 5 | 4 6 1 3
		//2 4 5 | 6 1 3
		//2 4 5 6 | 1 3
		//1 2 4 5 6 | 3
		//1 2 3 4 5 6
		int end = i;
		int tmp = a[end + 1];//要把end+1先保存起来，因为如果end+1比前面end的值小，那么end的值要往后移动到end+1的位置上，会把end+1的值覆盖掉
		while (end >= 0)
		{
			if (a[end]>tmp)//如果要插入的end + 1位置处的值tmp比end位置处的值要小，把end位置的数往后移动到end+1位置上，同时end要--
			{
				a[end + 1] = a[end];
				--end;
			}
			else
			{
				break;//这个情况是把end+1位置处的值tmp插到中间的位置，else里面没有写程序，是因为可以写成一个代码a[end + 1] = tmp
			}
		}
		//这个while循环有两种情况会结束,1 把end+1位置处的值tmp插到中间的位置  2 end+1位置处的值tmp插到最前面
		//跳出while循环，此时end=-1,会出现的情况是：end+1位置处的值tmp插到最前面
		a[end + 1] = tmp;//（这种写法太牛逼了）这句代码包含了两种情况，1 把end+1位置处的值tmp插到中间的位置 
		                                                             //2 end+1位置处的值tmp插到最前面
	}
}

void ShellSort(int* a,int n)
{
	int gap = n;

	while (gap > 1)
	{
		gap = gap / 2;                           //logN（以2为底的对数）
		//gap = gap / 3 + 1;//也可以写这样       //log3N（以3为底的对数）

		//gap>1时都是预排序          接近有序
		//gap==1时就是直接插入排序   有序


		//gap很大时，下面预排序时间复杂度O（N）
		//gap很小时，数组已经接近有序了，这时差不多也是O（N）

		//把间隔为gap的多组数据同时排
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

//建小堆
//向下调整算法
//前提：左右子树都是小堆       满足这个前提才能用这个算法

//从根节点开始
//选出左右孩子中小的那一个，跟父亲比较，如果比父亲小就交换
//然后再继续往下调，调到叶子就停止
void AdjustDown(int* a, int n, int root)
{
	int parent = root;//父亲的下标是root
	int child = parent * 2 + 1;//默认是左孩子     根据公式有左孩子chlid = parent * 2 + 1
	while (child < n)
	{
		//1 选出左右孩子中大的那一个
		if (child+1<n && a[child+1] > a[child])//右孩子a[child+1]小于左孩子a[child]
		{
			child += 1;//左孩子进行加1操作，左孩子+1就变成了右孩子
		}
		//程序走到这里，说明右孩子a[child+1]大于或等于左孩子a[child]

		//交换
		if (a[child] > a[parent])
		{
			Swap(&a[child],&a[parent]);//把小的换给父亲parent
			parent = child;//孩子换到父亲parent的位置
			child = parent * 2 + 1;//父亲换到孩子的位置（child与parent的关系是：child = parent * 2 + 1）
		}
		else
		{
			break;
		}
	}
}

//注意：左右子树不是小堆，就不能直接使用向下调整算法了！怎么办？
//    倒着从最后一棵子树开始调
//    再分析倒着走，叶子也不需要调，从倒数最后一个非叶子的子树开始调

//n-1是最后一个孩子节点的下标，再减1除2就是父亲节点，即（n-1-1）/2是父亲节点（公式child=parent*2+1可得到），i要大于或等于0,再--i
//       for(int i=(n-1-1)/2;i>=0;--i)
//       {
//           AdjustDown(a,n,i);
//       }


//升序，建小堆？还是大堆？ -> 大堆
//整体时间复杂度：O（N*logN）
void HeapSort(int* a, int n)
{
	//建堆（建成大堆或小堆）   这里以建小堆为例
	for(int i=(n-1-1)/2;i>=0;--i)
	{
		AdjustDown(a, n, i);
	}//到这里，建堆完成
	//排升序，建大堆还是小堆？ 要建大堆   （建小堆，效率太低，并且建堆选数，还不如直接遍历选数）
	int end = n - 1;
	while (end > 0)
	{
		Swap(&a[0], &a[end]);
		AdjustDown(a, end, 0);
		--end;
	}
}

void TestHeapSort()
{
	int a[] = { 3, 5, 2, 7, 8, 6, 1, 9, 4, 0 };
	HeapSort(a, sizeof(a) / sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));
}


// 测试排序的性能对比
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
	//TestOP();
	TestHeapSort();

	return 0;
}