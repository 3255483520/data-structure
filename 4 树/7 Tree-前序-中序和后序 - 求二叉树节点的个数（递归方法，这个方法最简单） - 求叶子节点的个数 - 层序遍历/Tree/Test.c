#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"


//没有打印出空指针NULL

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
//void PrevOrder(BTNode* root)//前序
//{
//	if (root == NULL)//根节点为空指针NULL，是一个空树，直接return返回就行
//		return;
//
//	//程序走到这里说明不是空树
//	printf("%c ", root->data);//打印出根节点的数值
//	PrevOrder(root->left);//对根节点的左树进行前序操作
//	PrevOrder(root->right);//对根节点的右树进行前序操作
//}
//
//void InOrder(BTNode* root)//中序
//{
//
//
//}
//
//void PostOrder(BTNode* root)//后序
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
//	A->left = B;//A的左孩子指向B
//	A->right = C;//A的右孩子指向C
//	B->left = D;//B的左孩子指向D
//	B->right = E;//B的左孩子指向E
//
//	PrevOrder(A);//A就是这棵树的根  前序PrevOrder打印这棵树
//	printf("\n");
//
//	return 0;
//}


//打印出：前序 中序 后序
//不打印出空指针NULL

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
//void PrevOrder(BTNode* root)//前序
//{
//	if (root == NULL)//根节点为空指针NULL，是一个空树，直接return返回就行
//	{
//		return;
//	}
//
//	//程序走到这里说明不是空树
//	printf("%c ", root->data);//打印出根节点的数值            //根
//	PrevOrder(root->left);//对根节点的左树进行前序操作        //左子树
//	PrevOrder(root->right);//对根节点的右树进行前序操作       //右子树
//}
//
//void InOrder(BTNode* root)//中序
//{
//	if (root == NULL)//根节点为空指针NULL，是一个空树，直接return返回就行
//	{
//		printf("NULL ");//打印出空指针NULL(把空指针NULL也打印出来)
//		return;
//	}
//
//	//程序走到这里说明不是空树
//	PrevOrder(root->left);//对根节点的左树进行前序操作        //左子树
//	printf("%c ", root->data);//打印出根节点的数值            //根
//	PrevOrder(root->right);//对根节点的右树进行前序操作       //右子树
//
//}
//
//void PostOrder(BTNode* root)//后序
//{
//	if (root == NULL)//根节点为空指针NULL，是一个空树，直接return返回就行
//	{
//		printf("NULL ");//打印出空指针NULL(把空指针NULL也打印出来)
//		return;
//	}
//
//	//程序走到这里说明不是空树
//	PrevOrder(root->left);//对根节点的左树进行前序操作        //左子树
//	PrevOrder(root->right);//对根节点的右树进行前序操作       //右子树
//	printf("%c ", root->data);//打印出根节点的数值            //根
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
//	A->left = B;//A的左孩子指向B
//	A->right = C;//A的右孩子指向C
//	B->left = D;//B的左孩子指向D
//	B->right = E;//B的左孩子指向E
//
//	PrevOrder(A);//A就是这棵树的根  前序PrevOrder打印这棵树
//	printf("\n");
//
//	InOrder(A);//A就是这棵树的根  中序PrevOrder打印这棵树
//	printf("\n");
//
//	PostOrder(A);//A就是这棵树的根  后序PrevOrder打印这棵树
//	printf("\n");
//
//	return 0;
//}


//打印出空指针NULL

typedef char BTDataType;

typedef struct BinaryTreeNode
{
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
	BTDataType data;
}BTNode;


void PrevOrder(BTNode* root)//前序
{
	if (root == NULL)//根节点为空指针NULL，是一个空树，直接return返回就行
	{
		printf("NULL ");//打印出空指针NULL(把空指针NULL也打印出来)
		return;
	}
		
	//程序走到这里说明不是空树
	printf("%c ", root->data);//打印出根节点的数值            //根
	PrevOrder(root->left);//对根节点的左树进行前序操作        //左子树
	PrevOrder(root->right);//对根节点的右树进行前序操作       //右子树
}

void InOrder(BTNode* root)//中序
{
	if (root == NULL)//根节点为空指针NULL，是一个空树，直接return返回就行
	{
		printf("NULL ");//打印出空指针NULL(把空指针NULL也打印出来)
		return;
	}

	//程序走到这里说明不是空树
	PrevOrder(root->left);//对根节点的左树进行前序操作        //左子树
	printf("%c ", root->data);//打印出根节点的数值            //根
	PrevOrder(root->right);//对根节点的右树进行前序操作       //右子树

}

void PostOrder(BTNode* root)//后序
{
	if (root == NULL)//根节点为空指针NULL，是一个空树，直接return返回就行
	{
		printf("NULL ");//打印出空指针NULL(把空指针NULL也打印出来)
		return;
	}

	//程序走到这里说明不是空树
	PrevOrder(root->left);//对根节点的左树进行前序操作        //左子树
	PrevOrder(root->right);//对根节点的右树进行前序操作       //右子树
	printf("%c ", root->data);//打印出根节点的数值            //根

}




int TreeSize(BTNode* root)//求二叉树节点的个数
{
	return root == NULL ? 0 : TreeSize(root->left) + TreeSize(root->right) + 1;
	//root等于空指针，就是空树，是0个节点，
	//root不等于空指针，就是TreeSize(root->left) + TreeSize(root->right) + 1个节点(左子树节点数+右子树节点数+1)
}

int TreeLeafSize(BTNode* root)//求叶子节点的个数
{
	if (root == NULL)//如果根节点root等于空指针，则这个根节点root没有叶子,返回0
		return 0;
	if (root->left == NULL && root->right == NULL)//如果根节点root的左子树和根节点root的右子树都等于空指针，则这个根节点root就是一个叶子，返回1
		return 1;
	//如果根节点root不是空指针，也不是叶子，返回root左子树的叶子节点的个数+root右子树的叶子节点的个数
	return TreeLeafSize(root->left) + TreeLeafSize(root->right);

}

//前序中序后序遍历其实也叫  深度优先遍历



//层序遍历  也叫广度优先遍历
//  队列   先进先出
//  核心思路就是：上一层带下一层

void LevelOrder(BTNode* root)
{
	//核心思路：上一层节点出的时候带下一层节点进
	Queue q;
	QueueInit(&q);
	if (root)
		QueuePush(&q, root);

	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);
		QueuePop(&q);
		printf("%c ", front->data);

		if (front->left)
		{
			QueuePush(&q, front->left);
		}

		if (front->right)
		{
			QueuePush(&q, front->right);
		}
	}
	printf("\n");

	QueueDestory(&q);
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

	A->left = B;//A的左孩子指向B
	A->right = C;//A的右孩子指向C
	B->left = D;//B的左孩子指向D
	B->right = E;//B的左孩子指向E

	PrevOrder(A);//A就是这棵树的根  前序PrevOrder打印这棵树
	printf("\n");

	InOrder(A);//A就是这棵树的根  中序PrevOrder打印这棵树
	printf("\n");

	PostOrder(A);//A就是这棵树的根  后序PrevOrder打印这棵树
	printf("\n");


	printf("TreeSize:%d\n", TreeSize(A));

	printf("TreeSize:%d\n", TreeSize(B));


	LevelOrder(A);//层序遍历

	return 0;
}


