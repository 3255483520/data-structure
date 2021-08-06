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



//这个程序没问题
void PrintArray(int* a, int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

//插入排序
//时间复杂度为O（n^2）
//什么情况下最坏？   逆序   1+2+3+...+n-1    O（n^2）
//什么情况下最好？   顺序有序    O（n）
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

void TestInsertSort()
{
	int a[] = { 3, 5, 2, 7, 8, 6, 1, 9, 4, 0 };
	InsertSort(a,sizeof(a)/sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));

}

int main()
{
	
	TestInsertSort();

	return 0;
}