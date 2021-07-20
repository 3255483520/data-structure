#define _CRT_SECURE_NO_WARNINGS 1

//数组nums包含从0到n的所有整数，但其中缺了一个。请编写代码找出那个缺失的整数。你有办法在O(n)时间内完成吗？注意：本题相对书上原题稍作改动
//
//示例 1：
//		输入：[3, 0, 1]
//		输出：2
//示例 2：
//		输入：[9, 6, 4, 2, 3, 5, 7, 0, 1]
//		输出：8

int missingNumber(int* nums, int numSize)
{
	int x = 0;
	//先跟数组中的值异或
	for (int i = 0; i < numSize; i++)
	{
		x ^= nums[i];
	}
	//再跟[0,N]之间的数异或
	for (int j = 0; j < numSize + 1; j++)
	{
		x ^= j;
	}

	return x;
}

int main()
{
	int arr[9] = { 0, 1, 2, 3, 4, 5, 6, 7, 9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret=missingNumber(arr, sz);

	printf("%d\n", ret);

	return 0;
}
