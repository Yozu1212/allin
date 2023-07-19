#include<stdio.h>
#define ARRAY_SIZE 4

int main(void) 
{
	int b[]={10,20,30,40};
	int *bPtr=b;
	puts("Array b printed with:\nArray index notation");
	size_t i=0;
	for(i=0;i<ARRAY_SIZE;++i)
	{
		printf("b[%u]=%d\n",i,b[i]);
	}
	puts("\nPointer/offset notation where\n"
	     "the pointer is the array name");
	size_t offset=0;
	for(offset=0;offset<ARRAY_SIZE;++offset)
	{
		printf("*(b+%u)=%d\n",offset,*(b+offset));
	}
	puts("\nPointer index notation");
	for(i=0;i<ARRAY_SIZE;++i)
	{
		printf("bPtr[%u]=%d\n",i,bPtr[i]);	
	}
	puts("\nPointer/offset notation");
	for(offset=0;offset<ARRAY_SIZE;++offset)
	{
	    printf("*(bPtr+%u)=%d\n",offset,*(bPtr+offset));	
    }	 	          
	system("pause");
	return 0;
}
