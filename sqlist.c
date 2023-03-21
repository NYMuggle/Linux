#include <stdio.h>
#include <stdlib.h>
#include "sqlist.h"

sqlist * sqlist_create()    //链表创建
{
	sqlist *me;
	me = malloc(sizeof(sqlist));
	if(me == NULL)
		return NULL;
	me -> last = -1;
	return me;	
}

int sqlist_insert(sqlist *me, int i, datatype *data)     //链表插入单个数据：结构体、位置、插入数据的地址
{
	int j;
	printf("me.last = %d, DATASIZE-1 = %d \n",me->last,DATASIZE-1);
	if((me->last) == (DATASIZE -1))
		return -1;
	if(i < 0 || i > me -> last +1)
		return -2;
	for(j = me -> last; i <= j; j--)
	{
		me -> data[j+1] = me-> data[j];
		printf("i = %d, j = %d\n",i,j);
	}

	me -> data[i] = *data;
	me -> last++;	
	return 0;
}

int sqlist_delete(sqlist *me, int i)     //链表删除
{
	int j;
	if(i < 0 || i > me->last)
		return -1;
	
	for(j = i+1; j <= me->last; j++)
		me -> data[j-1] = me->data[j];
	me->last --;
	return 0;
}

int sqlist_find(sqlist *me, datatype *data);       //查找

int sqlist_isempty(sqlist *me);       //判断是否为空

int sqlist_setempty(sqlist *me);      //设置为空

int sqlist_getnum(sqlist *me);    //取长度

void sqlist_display(sqlist *me)
{
	printf("start func:sqlist_display\n");
	int i;
	if(me -> last == -1)
		return;
	for(i = 0; i <= me -> last; i++)
	{
		printf("%d  ", me -> data[i]);
	}	
	printf("\n");
	return;
}	

int sqlist_destroy(sqlist *me);   //链表销毁

int sqlist_union(sqlist *list1, sqlist *list2);   //合并

