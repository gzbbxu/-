#include "linklist.h"
#include <stdio.h>
#include <stdlib.h>
typedef struct _Teacher {
	LinkListNode  node; //前4个字节扔给链表库
	char name[64];
	int age;
}Teacher;

void  main() {
	int ret = 0, i = 0 ,len;
	LinkList * list = NULL;
	Teacher t1, t2, t3, t4, t5;
	t1.age = 10;
	t2.age = 20;
	t3.age = 30;
	t4.age = 40;
	t5.age = 50;
	list = LinkList_Create();
	

	printf("linkIst_length:%d \n",ret);
	ret = LinkList_Insert(list,	(LinkListNode*)(&t1), LinkList_Length(list));
	ret = LinkList_Insert(list, (LinkListNode*)(&t2), LinkList_Length(list));
	ret = LinkList_Insert(list, (LinkListNode*)(&t3), LinkList_Length(list));
	ret = LinkList_Insert(list, (LinkListNode*)(&t4), LinkList_Length(list));
	ret = LinkList_Insert(list, (LinkListNode*)(&t5), LinkList_Length(list));
	len = LinkList_Length(list);
	for (i = 0; i < LinkList_Length(list); i++) {
		Teacher * tmp = (Teacher*)LinkList_Get(list,i);
		if (tmp!=NULL) {
			printf("%d ",tmp->age);
		}
	}

	printf("\n");

	for (i = 0; i < len;i++) {
		Teacher * temp = (Teacher*)LinkList_Delete(list,0);
		if (temp !=NULL) {
			printf("delte %d ", temp->age);
		}
	}

	LinkList_Destroy(list);

    system("pause");
}