#include<stdio.h>
#include<stdlib.h>
#include"OneWay_LinkedList.h"
#include"Doubly_LinkedList.h"
#include"Static_LinkedList.h"

int Static_LinkedList()
{

	StaticLinkedList List_Array[1000];
	StaticLinkedList *p_Staticlist = NULL;
	int ret = 0;
	ret = Init_StaticLinklist(&p_Staticlist , List_Array, 1000);
	printf("%p\n", p_Staticlist);



	return 0;
}



int Doubly_LinkedList()
{




	return 0;
}

int OneWay_LinkedList()
{

	int ret = 0;
	LinkedList *LinkedList_A= NULL;

	ret = Create_node(&LinkedList_A);     //创建节点
	ret = Init_LinkedList(&LinkedList_A);   //初始化链表

	ret = Show_LinkedList(LinkedList_A);
	printf("\n");

	LinkedList *p_list = NULL;
	ret = Insert_Node_Tail(&LinkedList_A, 3);

	ret = Insert_Node_Tail(&LinkedList_A, 5);
	ret = Insert_Node_Tail(&LinkedList_A, 8);
	ret = Insert_Node_Tail(&LinkedList_A, 10);
	ret = Insert_Node_Tail(&LinkedList_A, 15);
	ret = Show_LinkedList(LinkedList_A);
	//printf("\n");
	//printf("********************************");
	//ret = Delete_LinkedList_A(LinkedList_A);
	//ret = Show_LinkedList_A(LinkedList_A);
	//printf("\n");
	//printf("********************************");


	ret = Insert_Node_Head(&LinkedList_A, 20);
	ret = Show_LinkedList(LinkedList_A);
	printf("\n");

	ret = Insert_Node(&LinkedList_A, 15, 13);

	ret = Show_LinkedList(LinkedList_A);


	LinkedList *pData = NULL;
	ret = Search_Data_LinkedList(LinkedList_A, &pData, 10);
	printf("数据为10的节点地址是：%p \n", pData);


	int data = 0;
	ret = Search_I_Data(LinkedList_A, 3, &data);
	printf("%d \n ", data);


	ret = Modify_Data(LinkedList_A, 8, 13);

	ret = Show_LinkedList(LinkedList_A);
	printf("\n");

	ret = Modify_Data(LinkedList_A, 13, 44);

	ret = Show_LinkedList(LinkedList_A);
	printf("\n");


	ret = Delete_Node(&LinkedList_A, 44);

	ret = Show_LinkedList(LinkedList_A);
	printf("\n");

	ret = Delete_LinkedList(LinkedList_A);


	return 0;
}

