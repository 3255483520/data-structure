#define _CRT_SECURE_NO_WARNINGS 1

//��ת����
//����һ�����飬�������е�Ԫ�������ƶ� k ��λ�ã����� k �ǷǸ�����
//
//���ף�
//	�������������Ľ�����������������ֲ�ͬ�ķ������Խ��������⡣
//	�����ʹ�ÿռ临�Ӷ�Ϊ O(1) �� ԭ�� �㷨������������
//ʾ�� 1:
//	���� : nums = [1, 2, 3, 4, 5, 6, 7], k = 3
//	��� : [5, 6, 7, 1, 2, 3, 4]
// ���� :
//	������ת 1 �� : [7, 1, 2, 3, 4, 5, 6]
//	������ת 2 �� : [6, 7, 1, 2, 3, 4, 5]
//	������ת 3 �� : [5, 6, 7, 1, 2, 3, 4]
//ʾ�� 2 :
//	���룺nums = [-1, -100, 3, 99], k = 2
//	�����[3, 99, -1, -100]
//���� :
//   ������ת 1 �� : [99, -1, -100, 3]
//   ������ת 2 �� : [3, 99, -1, -100]

#include <stdio.h>

void rotate(int* nums, int numsSize, int k){
	while (k--)
	{
		int tmp = nums[numsSize - 1];
		for (int end = numsSize - 2; end >= 0; --end)//����������н���ǶԵģ����������������
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



//���ַ�����ã�ţ���ҳ��Ĺ��ɣ�
// 1 2 3 4 5 6 7
//��k�����ã�  1 2 3 4 7 6 5
//ǰn-k�����ã�4 3 2 1 7 6 5
//���������ã� 5 6 7 1 2 3 4


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