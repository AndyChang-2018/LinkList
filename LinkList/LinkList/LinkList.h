#ifndef LINKLIST_H
#define LINKLIST_H

#include<stdio.h>
#include<stdlib.h>

//节点定义
typedef struct node
{
	int data;
	struct node *pNext;
} node;

typedef struct node LinkList;


//创建新节点 
int Create_node(LinkList **s);


//初始化链表
//int Init_LinkList();
int Init_LinkList(LinkList **s);

//初始化一张链表
int Init_LinkList_all(LinkList **s);

//插入节点——尾插
//LinkList *Insert_Node_Tail(LinkList *p_list, int data);
int Insert_Node_Tail(LinkList **p_list, int data);


//插入节点——前插
//LinkList *Insert_Node_Head(LinkList *p_list, int data);
int Insert_Node_Head(LinkList **p_list, int data);

//插入节点——节点sdata前插入
//LinkList *Insert_Node(LinkList *p_list, int s_data, int data);
int Insert_Node(LinkList **p_list, int s_data, int data);

//显示链表，正向
int Show_LinkList(LinkList *p_list);

//显示链表，逆向
int Show_LinkList_rev(LinkList *p_list);

//查找链表中是否有data
//LinkList *Search_Data_LinkList(LinkList *p_list, int s_data);
int Search_Data_LinkList(LinkList *p_list, LinkList **pData, int s_data);

//查找链表中第i个节点的data
int Search_I_Data(LinkList *p_list, int i, int *data);

//修改
int Modify_Data(LinkList *p_list, int s_data, int data);

//删除节点
//LinkList *Delete_Node(LinkList *p_list, int data);
int Delete_Node(LinkList **p_list, int s_data);

//删除整个链表
int Delete_linklist(LinkList *p_list);











#endif