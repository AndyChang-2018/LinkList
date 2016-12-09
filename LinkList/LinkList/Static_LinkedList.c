#include<stdio.h>
#include<stdlib.h>
#include"Static_LinkedList.h"


//初始化一个静态链表
int Init_StaticLinklist(StaticLinkedList **stalinlst, StaticLinkedList *array, int num)
{
	if (array == NULL)
	{
		printf("数组为空，请定义数组！");
		return -1;
	}
	StaticLinkedList *stalin = NULL;
	stalin = array;

	stalin[0].data = 0;

	for (int i = 0; i < num -1; i++)
	{
		stalin[i].curr = i + 1;
	}

	stalin[num - 1].curr = 0;
	stalin[num - 1].data = 0;

	*stalinlst = stalin;

	return 0;
}

//插入一个元素
int Inster_StaticLinkList(StaticLinkedList *stalinlst, int i_data)
{
	if (stalinlst == NULL)
	{
		printf("链表未初始化！");
		return -1;
	}



	return 0;
}
