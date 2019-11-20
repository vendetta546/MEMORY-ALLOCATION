#include <stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr=0;
	int e =10,i;
	ptr = calloc(e,sizeof(int));
	for(i =0 ;i<e;++i)
	ptr[i]=i;
	for(i=0;i<3;i++)
	printf("%d",i,ptr);
	ptr =realloc(ptr,e*sizeof(int));
	for(i=10;i<e;i++)
	ptr[i]=i;
	for(i=0;i<e;i++)
	printf("%d",i,ptr[i]);
	free(ptr);
}
