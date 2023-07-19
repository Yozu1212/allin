#include<stdio.h> 
#include<ctype.h> 
int main(void)
{
	int x=12345;
	int*Ptr=&x;
	
	printf("the value of ptr is %p\n",ptr);
	printf("the address of x is %p\n\n",&x);
	
	printf("printing a %% is a format control string\n");
	system("pause");
	return 0;
}
