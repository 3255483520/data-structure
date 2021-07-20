#define _CRT_SECURE_NO_WARNINGS 1

//旋转数组
//给定一个数组，将数组中的元素向右移动 k 个位置，其中 k 是非负数。
//
//进阶：
//	尽可能想出更多的解决方案，至少有三种不同的方法可以解决这个问题。
//	你可以使用空间复杂度为 O(1) 的 原地 算法解决这个问题吗？
//示例 1:
//	输入 : nums = [1, 2, 3, 4, 5, 6, 7], k = 3
//	输出 : [5, 6, 7, 1, 2, 3, 4]
// 解释 :
//	向右旋转 1 步 : [7, 1, 2, 3, 4, 5, 6]
//	向右旋转 2 步 : [6, 7, 1, 2, 3, 4, 5]
//	向右旋转 3 步 : [5, 6, 7, 1, 2, 3, 4]
//示例 2 :
//	输入：nums = [-1, -100, 3, 99], k = 2
//	输出：[3, 99, -1, -100]
//解释 :
//   向右旋转 1 步 : [99, -1, -100, 3]
//   向右旋转 2 步 : [3, 99, -1, -100]

#include <stdio.h>

void rotate(int* nums, int numsSize, int k){
	while (k--)
	{
		int tmp = nums[numsSize - 1];
		for (int end = numsSize - 2; end >= 0; --end)//这个程序运行结果是对的，但是这个程序会崩溃
		{
			nums[end + 1] = nums[end];
		}
		nums[0] = tmp;
	}
}

int main()
{
	int nums[7] = { 1, 2, 3, 4, 5, 6, 7 };
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	int k = 3;

	rotate(nums, numsSize, k);

	int i = 0;
	for (i = 0; i < numsSize; i++)
	{
		printf("%d ", nums[i]);
	}

	return 0;
}


//void rotate(int* nums, int numsSize, int k){
//	for (int i = 0; i < k;++i)
//	{
//		int tmp = nums[numsSize - 1];
//		for (int end = numsSize - 2; end >= 0; --end)
//		{
//			nums[end + 1] = nums[end];
//		}
//		nums[0] = tmp;
//	}
//}
//
//int main()
//{
//	int nums[7] = { 1, 2, 3, 4, 5, 6, 7 };
//	int numsSize = sizeof(nums) / sizeof(nums[0]);
//	int k = 3;
//
//	rotate(nums, numsSize, k);
//
//	int i = 0;
//	for (i = 0; i < numsSize; i++)
//	{
//		printf("%d ", nums[i]);
//	}
//
//	return 0;
//}



//这种方法最好（牛人找出的规律）
// 1 2 3 4 5 6 7
//后k个逆置：  1 2 3 4 7 6 5
//前n-k个逆置：4 3 2 1 7 6 5
//再整体逆置： 5 6 7 1 2 3 4


//void Reverse(int* nums, int left, int right)
//{
//	while (left<right)
//	{
//		int tmp = nums[left];
//		nums[left] = nums[right];
//		nums[right] = tmp;
//		++left;
//		--right;
//	}
//}
//
//void rotate(int* nums, int numsSize, int k){
//	if (k >= numsSize)
//	{
//		k %= numsSize;
//	}
//
//	Reverse(nums, numsSize - k, numsSize - 1);
//	Reverse(nums, 0, numsSize - k - 1);
//	Reverse(nums, 0, numsSize - 1);
//}
//
//int main()
//{
//	int nums[7] = { 1, 2, 3, 4, 5, 6, 7 };
//	int numsSize = sizeof(nums) / sizeof(nums[0]);
//	int k = 3;
//
//	rotate(nums, numsSize, k);
//
//	int i = 0;
//	for (i = 0; i < numsSize; i++)
//	{
//		printf("%d ", nums[i]);
//	}
//
//	return 0;
//}