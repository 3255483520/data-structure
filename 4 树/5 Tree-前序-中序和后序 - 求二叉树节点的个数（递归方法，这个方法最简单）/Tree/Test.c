#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>



//û�д�ӡ����ָ��NULL

//typedef char BTDataType;
//
//typedef struct BinaryTreeNode
//{
//	struct BinaryTreeNode* left;
//	struct BinaryTreeNode* right;
//	BTDataType data;
//}BTNode;
//
//
//void PrevOrder(BTNode* root)//ǰ��
//{
//	if (root == NULL)//���ڵ�Ϊ��ָ��NULL����һ��������ֱ��return���ؾ���
//		return;
//
//	//�����ߵ�����˵�����ǿ���
//	printf("%c ", root->data);//��ӡ�����ڵ����ֵ
//	PrevOrder(root->left);//�Ը��ڵ����������ǰ�����
//	PrevOrder(root->right);//�Ը��ڵ����������ǰ�����
//}
//
//void InOrder(BTNode* root)//����
//{
//
//
//}
//
//void PostOrder(BTNode* root)//����
//{
//
//
//}
//
//
//int main()
//{
//	BTNode* A = (BTNode*)malloc(sizeof(BTNode));
//	A->data = 'A';
//	A->left = NULL;
//	A->right = NULL;
//
//	BTNode* B = (BTNode*)malloc(sizeof(BTNode));
//	B->data = 'B';
//	B->left = NULL;
//	B->right = NULL;
//
//	BTNode* C = (BTNode*)malloc(sizeof(BTNode));
//	C->data = 'C';
//	C->left = NULL;
//	C->right = NULL;
//
//	BTNode* D = (BTNode*)malloc(sizeof(BTNode));
//	D->data = 'D';
//	D->left = NULL;
//	D->right = NULL;
//
//	BTNode* E = (BTNode*)malloc(sizeof(BTNode));
//	E->data = 'E';
//	E->left = NULL;
//	E->right = NULL;
//
//	A->left = B;//A������ָ��B
//	A->right = C;//A���Һ���ָ��C
//	B->left = D;//B������ָ��D
//	B->right = E;//B������ָ��E
//
//	PrevOrder(A);//A����������ĸ�  ǰ��PrevOrder��ӡ�����
//	printf("\n");
//
//	return 0;
//}


//��ӡ����ǰ�� ���� ����
//����ӡ����ָ��NULL

//typedef char BTDataType;
//
//typedef struct BinaryTreeNode
//{
//	struct BinaryTreeNode* left;
//	struct BinaryTreeNode* right;
//	BTDataType data;
//}BTNode;
//
//
//void PrevOrder(BTNode* root)//ǰ��
//{
//	if (root == NULL)//���ڵ�Ϊ��ָ��NULL����һ��������ֱ��return���ؾ���
//	{
//		return;
//	}
//
//	//�����ߵ�����˵�����ǿ���
//	printf("%c ", root->data);//��ӡ�����ڵ����ֵ            //��
//	PrevOrder(root->left);//�Ը��ڵ����������ǰ�����        //������
//	PrevOrder(root->right);//�Ը��ڵ����������ǰ�����       //������
//}
//
//void InOrder(BTNode* root)//����
//{
//	if (root == NULL)//���ڵ�Ϊ��ָ��NULL����һ��������ֱ��return���ؾ���
//	{
//		printf("NULL ");//��ӡ����ָ��NULL(�ѿ�ָ��NULLҲ��ӡ����)
//		return;
//	}
//
//	//�����ߵ�����˵�����ǿ���
//	PrevOrder(root->left);//�Ը��ڵ����������ǰ�����        //������
//	printf("%c ", root->data);//��ӡ�����ڵ����ֵ            //��
//	PrevOrder(root->right);//�Ը��ڵ����������ǰ�����       //������
//
//}
//
//void PostOrder(BTNode* root)//����
//{
//	if (root == NULL)//���ڵ�Ϊ��ָ��NULL����һ��������ֱ��return���ؾ���
//	{
//		printf("NULL ");//��ӡ����ָ��NULL(�ѿ�ָ��NULLҲ��ӡ����)
//		return;
//	}
//
//	//�����ߵ�����˵�����ǿ���
//	PrevOrder(root->left);//�Ը��ڵ����������ǰ�����        //������
//	PrevOrder(root->right);//�Ը��ڵ����������ǰ�����       //������
//	printf("%c ", root->data);//��ӡ�����ڵ����ֵ            //��
//
//}
//
//
//int main()
//{
//	BTNode* A = (BTNode*)malloc(sizeof(BTNode));
//	A->data = 'A';
//	A->left = NULL;
//	A->right = NULL;
//
//	BTNode* B = (BTNode*)malloc(sizeof(BTNode));
//	B->data = 'B';
//	B->left = NULL;
//	B->right = NULL;
//
//	BTNode* C = (BTNode*)malloc(sizeof(BTNode));
//	C->data = 'C';
//	C->left = NULL;
//	C->right = NULL;
//
//	BTNode* D = (BTNode*)malloc(sizeof(BTNode));
//	D->data = 'D';
//	D->left = NULL;
//	D->right = NULL;
//
//	BTNode* E = (BTNode*)malloc(sizeof(BTNode));
//	E->data = 'E';
//	E->left = NULL;
//	E->right = NULL;
//
//	A->left = B;//A������ָ��B
//	A->right = C;//A���Һ���ָ��C
//	B->left = D;//B������ָ��D
//	B->right = E;//B������ָ��E
//
//	PrevOrder(A);//A����������ĸ�  ǰ��PrevOrder��ӡ�����
//	printf("\n");
//
//	InOrder(A);//A����������ĸ�  ����PrevOrder��ӡ�����
//	printf("\n");
//
//	PostOrder(A);//A����������ĸ�  ����PrevOrder��ӡ�����
//	printf("\n");
//
//	return 0;
//}


//��ӡ����ָ��NULL

typedef char BTDataType;

typedef struct BinaryTreeNode
{
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
	BTDataType data;
}BTNode;


void PrevOrder(BTNode* root)//ǰ��
{
	if (root == NULL)//���ڵ�Ϊ��ָ��NULL����һ��������ֱ��return���ؾ���
	{
		printf("NULL ");//��ӡ����ָ��NULL(�ѿ�ָ��NULLҲ��ӡ����)
		return;
	}
		
	//�����ߵ�����˵�����ǿ���
	printf("%c ", root->data);//��ӡ�����ڵ����ֵ            //��
	PrevOrder(root->left);//�Ը��ڵ����������ǰ�����        //������
	PrevOrder(root->right);//�Ը��ڵ����������ǰ�����       //������
}

void InOrder(BTNode* root)//����
{
	if (root == NULL)//���ڵ�Ϊ��ָ��NULL����һ��������ֱ��return���ؾ���
	{
		printf("NULL ");//��ӡ����ָ��NULL(�ѿ�ָ��NULLҲ��ӡ����)
		return;
	}

	//�����ߵ�����˵�����ǿ���
	PrevOrder(root->left);//�Ը��ڵ����������ǰ�����        //������
	printf("%c ", root->data);//��ӡ�����ڵ����ֵ            //��
	PrevOrder(root->right);//�Ը��ڵ����������ǰ�����       //������

}

void PostOrder(BTNode* root)//����
{
	if (root == NULL)//���ڵ�Ϊ��ָ��NULL����һ��������ֱ��return���ؾ���
	{
		printf("NULL ");//��ӡ����ָ��NULL(�ѿ�ָ��NULLҲ��ӡ����)
		return;
	}

	//�����ߵ�����˵�����ǿ���
	PrevOrder(root->left);//�Ը��ڵ����������ǰ�����        //������
	PrevOrder(root->right);//�Ը��ڵ����������ǰ�����       //������
	printf("%c ", root->data);//��ӡ�����ڵ����ֵ            //��

}




int TreeSize(BTNode* root)//��������ڵ�ĸ���
{
	return root == NULL ? 0 : TreeSize(root->left) + TreeSize(root->right) + 1;
	//root���ڿ�ָ�룬���ǿ�������0���ڵ㣬
	//root�����ڿ�ָ�룬����TreeSize(root->left) + TreeSize(root->right) + 1���ڵ�(�������ڵ���+�������ڵ���+1)
}



int main()
{
	BTNode* A = (BTNode*)malloc(sizeof(BTNode));
	A->data = 'A';
	A->left = NULL;
	A->right = NULL;

	BTNode* B = (BTNode*)malloc(sizeof(BTNode));
	B->data = 'B';
	B->left = NULL;
	B->right = NULL;

	BTNode* C = (BTNode*)malloc(sizeof(BTNode));
	C->data = 'C';
	C->left = NULL;
	C->right = NULL;

	BTNode* D = (BTNode*)malloc(sizeof(BTNode));
	D->data = 'D';
	D->left = NULL;
	D->right = NULL;

	BTNode* E = (BTNode*)malloc(sizeof(BTNode));
	E->data = 'E';
	E->left = NULL;
	E->right = NULL;

	A->left = B;//A������ָ��B
	A->right = C;//A���Һ���ָ��C
	B->left = D;//B������ָ��D
	B->right = E;//B������ָ��E

	PrevOrder(A);//A����������ĸ�  ǰ��PrevOrder��ӡ�����
	printf("\n");

	InOrder(A);//A����������ĸ�  ����PrevOrder��ӡ�����
	printf("\n");

	PostOrder(A);//A����������ĸ�  ����PrevOrder��ӡ�����
	printf("\n");


	printf("TreeSize:%d\n", TreeSize(A));


	printf("TreeSize:%d\n", TreeSize(B));

	return 0;
}


