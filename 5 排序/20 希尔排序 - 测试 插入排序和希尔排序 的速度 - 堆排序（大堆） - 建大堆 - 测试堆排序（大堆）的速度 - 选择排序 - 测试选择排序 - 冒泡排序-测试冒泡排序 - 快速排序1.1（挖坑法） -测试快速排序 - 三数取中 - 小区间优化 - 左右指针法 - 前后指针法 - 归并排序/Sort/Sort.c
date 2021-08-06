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

//直接选择排序          时间复杂度：O（N^2）
//很差，因为最好情况也是O（N^2）
//N
//N-2
//N-4
//...
void SelectSort(int* a, int n)
{
	int begin = 0, end = n - 1;//begin=0是数组第一个元素的下标   begin=n-1是数组最后一个元素的下标
	while (begin < end)//数组前面元素的下标小于后面元素的下标时，循环继续
	{
		int mini = begin, maxi = begin;
		for (int i = begin; i <= end; ++i)
		{
			if (a[i] < a[mini])
			{
				mini = i;//选出最小的元素的下标
			}
			if (a[i]>a[maxi])
			{
				maxi = i;//选出最大的元素的下标
			}
		}


		Swap(&a[begin], &a[mini]);//最小的换到左边
		//如果begin跟maxi重叠，需要修正一下maxi的位置
		if (begin == maxi)
		{
			maxi = mini;
		}

		Swap(&a[maxi], &a[end]);//最大的换到右边

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


//冒泡排序
//时间复杂度：O（N^2）
//最好情况：O（N）
//N-1
//N-2
//...
//跟直接插入排序相比？谁更好-》直接插入更好
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

	//上面这一段程序，也可以用这一段程序来实现
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

	//上面这一段程序，也可以用这一段程序来实现
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


//三数取中     取3个数中的中间值
int GetMidIndex(int* a, int left, int right)
{
	//三个数中要取不是最大也不是最小的那个
	int mid = (left + right) >> 1;//这句代码等于 int mid = (left + right)/2;
	//右移1位等于除2,理由如下：
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

//挖坑法
int PartSort1(int* a, int left, int right)
{
	int index = GetMidIndex(a, left, right);
	Swap(&a[left], &a[index]);

	int begin = left, end = right;//左边下标begin等于0，右边下标end等于n-1
	int pivot = begin;//假设选左边的做坑，即第一个位置形成一个坑
	int key = a[begin];//关键字key把左边的数保存起来
	//即第一个位置形成一个坑
	while (begin < end)
	{
		//右边找小，放到左边的坑位
		while (begin < end && a[end] >= key)//因为要找小，所以比key大，继续执行while循环，比key小才停下来
		{
			--end;//因为要找小，所以比key大，继续执行while循环
		}
		//程序走到这里，说明a[end]<key
		a[pivot] = a[end];//把右边找到的小放到左边的坑pivot  (小的放到左边的坑里面 ，自己形成了新的坑位)
		pivot = end;//小的放到左边的坑里面 ，自己形成了新的坑位,右边形成了新的坑位（形成的坑位是在右边的）

		//左边找大，放到右边坑位
		while (begin < end && a[begin] <= key)//因为要找大，所以小于key时，继续执行 while循环，比key大时才停下来
		{
			++begin; // 因为要找大，所以小于key时，继续执行 while循环，
		}
		//程序走到这里，说明a[begin > key
		a[pivot] = a[begin];//把左边找到的大放到右边的坑pivot  (大的放到右边的坑里面 ，自己形成了新的坑位)
		pivot = begin;//大的放到右边的坑里面 ，自己形成了新的坑位,左边形成了新的坑位（形成的坑位是在左边的）
	}

	pivot = begin;//begin与end相遇的位置就是最后的坑的位置，也可以写为pivot = end;  因为此时begin==end
	a[pivot] = key;//把key放到最后的坑里面

	return pivot;
}


//左右指针法     （挖坑法的变形，和挖坑法非常类似）
int PartSort2(int* a, int left, int right)
{
	int index = GetMidIndex(a, left, right);
	Swap(&a[left], &a[index]);

	int begin = left, end = right;//左边下标begin等于0，右边下标end等于n-1
	int keyi = begin;//关键字keyi把左边的数保存起来

	while (begin < end)//左边下标begin小于右边下标end时，循环继续
	{
		//找小
		while (begin < end && a[end] >= a[keyi])//左边下标begin小于右边下标end，并且a[end] >= a[keyi]时，循环继续
		{
			--end;
		}

		//找大
		while (begin < end && a[begin] <= a[keyi])//左边下标begin小于右边下标end，并且a[end] >= a[keyi]时，循环继续
		{
			++begin;
		}

		Swap(&a[begin], &a[end]);
	}
	//程序走到这里，说明begin和end相遇,说明begin等于end,即begin==end,此时交换begin与keyi
	Swap(&a[begin], &a[keyi]);

	return begin;//返回相遇的位置begin，相遇的位置也就是keyi要放置的位置
}



//前后指针法
int PartSort3(int* a, int left, int right)
{
	int index = GetMidIndex(a, left, right);
	Swap(&a[left], &a[index]);

	int keyi = left;//最左边的left做keyi
	int prev = left, cur = left + 1;//prev指向最左边的数，cur指向最左边的第2个数
	while (cur <= right)//cur指向最左边的第2个数小于或等于最右边的数right时，循环继续  	                
	{
		if (a[cur] < a[keyi])//找小   这句代码也可以写为：if (a[cur] < a[keyi] && ++prev!=cur),可以防止自己跟自己交换
			                 //if (a[cur] < a[keyi])--自己会跟自己交换，自己跟自己交换，这个没必要
							 //if (a[cur] < a[keyi] && ++prev!=cur),可以防止自己跟自己交换
		{
			++prev;
			Swap(&a[prev],&a[cur]);//交换a[prev]和a[cur]
		}
		++cur;
	}
	//程序走到这里，说明while循环结束

	Swap(&a[keyi], &a[prev]);//最后要交换a[keyi]和&a[prev]

	return prev;//返回prev
}




//快速排序--挖坑法 
//时间复杂度：O（N*logN）
void QuickSort(int* a, int left,int right)
{
	if (left >= right)
	{
		return;
	}

	int keyIndex = PartSort3(a,left,right);

	//[left,right]
	//[left,keyIndex] keyIndex [keyIndex+1,right]
	//左子区间和右子区间有序，我们就有序了，如何让它们有序呢？  使用 分治递归 实现


	//小区间优化程序
	if (keyIndex - 1 - left > 10)//小区间优化
	{
		QuickSort(a, left, keyIndex - 1);
	}
	else
	{
		InsertSort(a + left, keyIndex - 1 - left + 1);
	}

	if (right - (keyIndex + 1) > 10)//小区间优化
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
	if (left >= right)//left>right，这种情况是不存在的，left==right  这种情况只有一个数，一个数不需要归并
		return;

	int mid = (left + right) >> 1;//这句代码等于 int mid = (left + right)/2;
	//假设[left,mid] [mid+1,right] 有序，那么我们就可以归并了

	//右移1位等于除2,理由如下：
	//1000   8
	//0100   4
	//0010   2
	//0001   1

	//归并
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


	//拷贝回去
	for (int i = left; i <= right; ++i)
	{
		a[i] = tmp[i];
	}


}


//归并排序
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