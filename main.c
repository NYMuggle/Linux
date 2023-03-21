#include <stdio.h>
#include <stdlib.h>
#include "sqlist.h"

int main()
{
	int err;
	int i = 0;
	datatype arr[] = {11,22,33,44,55};	
	sqlist *list;
	list = sqlist_create();
	if(list == 	NULL)
	{
		fprintf(stderr,"sqlist_create() failed!\n");
		exit(1);
	}

	for(i = 0; i< sizeof(arr) / sizeof(*arr); i++)
	{	
	 	printf("try to insert\n");
		if((err = sqlist_insert(list, 0, &arr[i])) != 0)
		{
			if(err = -1)
				fprintf(stderr,"list already full!\n");
			else if(err = -2)
				fprintf(stderr,"insert position wrong!\n");
			else
				fprintf(stderr,"Error!\n");
			exit(1);		
		}
		sqlist_display(list);
		printf("\n");
	}
	printf("finish insert!\n");
	sqlist_display(list);	
	sqlist_delete(list,3);
	sqlist_display(list);
	exit(0);
}



