#define _CRT_SECURE_NO_WARNINGS 1

//����nums������0��n������������������ȱ��һ�������д�����ҳ��Ǹ�ȱʧ�����������а취��O(n)ʱ���������ע�⣺�����������ԭ�������Ķ�
//
//ʾ�� 1��
//		���룺[3, 0, 1]
//		�����2
//ʾ�� 2��
//		���룺[9, 6, 4, 2, 3, 5, 7, 0, 1]
//		�����8

int missingNumber(int* nums, int numSize)
{
	int x = 0;
	//�ȸ������е�ֵ���
	for (int i = 0; i < numSize; i++)
	{
		x ^= nums[i];
	}
	//�ٸ�[0,N]֮��������
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
