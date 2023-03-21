#ifndef SQLIST_H__
#define SQLIST_H__

#define DATASIZE 1024
typedef int datatype;

typedef struct node_st
{
	datatype data[DATASIZE];
	int last;
}sqlist;

sqlist *sqlist_create();	//链表创建

int sqlist_insert(sqlist *, int i, datatype *);		//链表插入

int sqlist_delete(sqlist *, int i);		//链表删除

int sqlist_find(sqlist *,datatype *);		//查找

int sqlist_isempty(sqlist *);		//判断是否为空

int sqlist_setempty(sqlist *);		//设置为空

int sqlist_getnum(sqlist *);	//取长度

void sqlist_display(sqlist *);	//遍历显示

int sqlist_destroy(sqlist *);	//链表销毁

int sqlist_union(sqlist *, sqlist *);	//合并




#endif




