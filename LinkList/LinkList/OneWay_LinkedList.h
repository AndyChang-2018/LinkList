#ifndef _ONEWAY_LINKEDLIST_
#define _ONEWAY_LINKEDLIST_

#include<stdio.h>
#include<stdlib.h>

//节点定义
typedef struct node
{
	int data;
	struct node *pNext;
} node;

typedef struct node LinkedList;


//创建新节点 
int Create_node(LinkedList **s);


//初始化链表
//int Init_LinkedList();
int Init_LinkedList(LinkedList **s);

//初始化一张链表
int Init_LinkedList_all(LinkedList **s);

//插入节点——尾插
//LinkedList *Insert_Node_Tail(LinkedList *p_list, int data);
int Insert_Node_Tail(LinkedList **p_list, int data);


//插入节点——前插
//LinkedList *Insert_Node_Head(LinkedList *p_list, int data);
int Insert_Node_Head(LinkedList **p_list, int data);

//插入节点——节点sdata前插入
//LinkedList *Insert_Node(LinkedList *p_list, int s_data, int data);
int Insert_Node(LinkedList **p_list, int s_data, int data);

//显示链表，正向
int Show_LinkedList(LinkedList *p_list);

//显示链表，逆向
int Show_LinkedList_rev(LinkedList *p_list);

//查找链表中是否有data
//LinkedList *Search_Data_LinkedList(LinkedList *p_list, int s_data);
int Search_Data_LinkedList(LinkedList *p_list, LinkedList **pData, int s_data);

//查找链表中第i个节点的data
int Search_I_Data(LinkedList *p_list, int i, int *data);

//查找倒数第i个节点的data
int Search_I_Data_Rev(LinkedList *p_list, int i, int *data);

//修改
int Modify_Data(LinkedList *p_list, int s_data, int data);

//删除节点
//LinkedList *Delete_Node(LinkedList *p_list, int data);
int Delete_Node(LinkedList **p_list, int s_data);

//删除整个链表
int Delete_LinkedList(LinkedList *p_list);


//两个链表合并

//链表逆置

//链表排序









#endif