#include<stdio.h>
#include<stdlib.h>
#include"OneWay_LinkedList.h"
#include<time.h>
#include"Test.h"

int main()
{
	clock_t start, stop;
	start = clock();
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	int ret = 0;


	ret = Static_LinkedList();

	//ret = OneWay_LinkedList();

	//ret =  Doubly_LinkedList();





	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	stop = clock();
	printf("\n程序运行时间为：%f\n", ((double)(stop - start)) / CLK_TCK);	
 	system("pause");
	return 0;
}