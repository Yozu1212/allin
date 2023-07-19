#include<stdio.h>

int main(void) 
{
	int x,y;
	int *const ptr=&x;
	*ptr=7;
	ptr=&y;	          
	system("pause");
	return 0;
}
