#include<stdio.h>
#include<stdlib.h>
#include"OneWay_LinkedList.h"


//创建新节点
int Create_node(LinkedList **s)
{
	*s = (LinkedList *)malloc(sizeof(LinkedList));
	
	(*s)->data = 0;
	(*s)->pNext = NULL;
	
	return 0;
}

//初始化链表
int Init_LinkedList(LinkedList **s)
{
	*s = (LinkedList *)malloc(sizeof(LinkedList));

	(*s)->data = 0;
	(*s)->pNext = NULL;

 	return 0;
}

//插入节点——尾插
int Insert_Node_Tail(LinkedList **p_list, int data)
{
	if (*p_list == NULL)
	{
		printf("链表未初始化！");
		return -1;
	}

	LinkedList *s = *p_list;

	//遍历到链表尾部
	while (s->pNext != NULL)
	{
		s = s->pNext;
	}

	//创建新节点
	LinkedList *Tail_Node = NULL;
	int ret = Create_node(&Tail_Node);

	//赋值新节点
	Tail_Node->data = data;
	Tail_Node->pNext = NULL;

	//尾部插入新节点！
	s->pNext = Tail_Node;

	return 0;
}


//插入节点——前插
int Insert_Node_Head(LinkedList **p_list, int data)
{
	if (*p_list == NULL)
	{
		printf("链表未初始化！");
		return -1;
	}

	LinkedList *s = *p_list;

	//创建新节点
	LinkedList *Tail_Node = NULL;
	int ret = Create_node(&Tail_Node);

	Tail_Node->data = data;

	//头节点后插入新节点！
	Tail_Node->pNext = s->pNext;
	s->pNext = Tail_Node;

	return 0;
}

//插入节点——节点s_data前插入
int Insert_Node(LinkedList **p_list, int s_data, int data)
{
	if (*p_list == NULL)
	{
		printf("链表未初始化！");
		return -1;
	}

	//创建两个辅助指针变量，并分别指向两个节点
	LinkedList *p1, *p2;
	p1 = *p_list;            //指向头节点
	p2 = (*p_list)->pNext;   //指向都节点后面的节点

	//查找，并循环移动两个辅助指针位置！
	while (p2->data != s_data)
	{
		p1 = p1->pNext;
		p2 = p2->pNext;
	}
	
	//创建新节点
	LinkedList *Tail_Node = NULL;
	int ret = Create_node(&Tail_Node);

	Tail_Node->data = data;
	
	//插入新节点 ！
	Tail_Node->pNext = p2;
	p1->pNext = Tail_Node;


	return 0;
}

//显示链表，正向
int Show_LinkedList(LinkedList *p_list)
{
	if (p_list != NULL)
	{
		printf("%d , %p , %p \n", p_list->data, p_list, p_list->pNext); //放在递归下面，则是逆序打印
		Show_LinkedList(p_list->pNext);
	}

	return 0;
}

//显示链表，逆向
int Show_LinkedList_rev(LinkedList *p_list)
{
	if (p_list != NULL)
	{
		Show_LinkedList(p_list->pNext);
		printf("%d , %p , %p \n", p_list->data, p_list, p_list->pNext);

	}

	return 0;


}

//查找链表中是否有data
int Search_Data_LinkedList(LinkedList *p_list, LinkedList **pData , int s_data)
{
	if (p_list == NULL)
	{
		printf("链表未初始化！");
		return -1;
	}
	int flag = 0;
	LinkedList *s = p_list;

	while (s)
	{
		if (s->data == s_data) //判断是否相等，相等则找到，结束循环
		{
			flag = 1;
			break;
		}
		s = s->pNext;
	}

	*pData = s;

	if (!flag)
	{
		printf("没有找到值为：%d 的节点！\n", s_data);
	}

	return 0;
}

//查找链表中第i个节点的data
int Search_I_Data(LinkedList *p_list, int i, int *data)
{
	if (p_list == NULL)
	{
		printf("链表未初始化！");
		return -1;
	}

	LinkedList *ptemp = p_list->pNext;

	//循环找到i上一个位置的地址！
	for (int j = 1; j < i; j++)
	{
		if (ptemp->pNext == NULL)
		{
			printf("没有第%d个位置的节点！\n",i);
			return -1;
		}
		ptemp = ptemp->pNext;
	}

	*data = ptemp->data;

	return 0;
}

//查找倒数第i个节点的data
int Search_I_Data_Rev(LinkedList *p_list, int i, int *data)
{
	LinkedList *first = p_list;         //前面一个指针  
	int cnt = 0;

	while ( cnt++ < i )
	{             //向前移动k位  
		if (!first)
		{
			fprintf(stderr, "链表长度小于I！\n");
			return -1;
		}
		else
			first = first->pNext;
	}

	LinkedList *index = p_list;              //后一个指针，此时first和index正好相差k位  
	while ( first )
	{                   //当first遍历到末尾时index必是所要求的值  
		first = first->pNext;
		index = index->pNext;
	}

	*data = index->data;

	return 0;
}

//修改节点的Data
int Modify_Data(LinkedList *p_list, int s_data, int data)
{
	int flag = 0;
	if (p_list == NULL)
	{
		printf("链表未初始化！");
		return -1;
	}
	 
	LinkedList *s = p_list;
	while (s)
	{
		if (s->data == s_data) //判断是否相等，相等则修改值
		{
			flag = 1;
			s->data = data;
		}
		s = s->pNext;
	}
	if (!flag)
	{
		printf("没有找到值为：%d 的节点！\n", s_data);
	}

	return 0;
}

//删除节点
int Delete_Node(LinkedList **p_list, int s_data)
{
	if (*p_list == NULL)
	{
		printf("链表未初始化！");
		return -1;
	}

	int flag = 0;
	//创建两个辅助指针变量，并分别指向两个节点
	LinkedList *p1, *p2;
	p1 = *p_list;            //指向头节点
	p2 = (*p_list)->pNext;   //指向都节点后面的节点

	//循环整个链表
	while (p2->pNext != NULL)
	{
		//判断链表中有没有相同项
		if (p2->data == s_data)
		{
			flag = 1;
			p1->pNext = p2->pNext; //在链表中删除指定节点
			free(p2);              //释放被删除节点内存
		}
		p1 = p1->pNext;
		if (p1->pNext == NULL)
		{
			break;
		}
		p2 = p1->pNext;
	}
	if (!flag)
	{
		printf("没有找到值为：%d 的节点！\n", s_data);
	}

	return 0;
}

//删除整个链表
int Delete_LinkedList(LinkedList *p_list)
{
	if (p_list == NULL)
	{
		printf("链表未初始化！");
		return -1;
	}

	LinkedList *p1, *p2;
	p1 = p_list->pNext;

	while (p1)
	{
		p2 = p1->pNext;
		free(p1);
		//p1->pNext = NULL;  //一开始加了这句话，本是以为把释放节点中的指针域置空，但就这句话导致出现free(p1)的时候出现崩溃。但还没搞明白为啥会错误，p1指向也不为空的呀
		p1 = p2;
	}

	p_list->pNext = NULL;



	return 0;
}
