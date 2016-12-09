#ifndef _STATIC_LINKEDLIST_
#define _STATIC_LINKEDLIST_

#include<stdio.h>
#include<stdlib.h>

#define MAXSIZE 1000;

//结构体定义
typedef struct 
{
	int data;
	int curr;

}StaticLinkedList;

//初始化一个静态链表
int Init_StaticLinklist(StaticLinkedList **stalinlst, StaticLinkedList *array, int num);

//插入一个元素
int Inster_StaticLinkList(StaticLinkedList *array, int i_data);




#endif