#include <stdio.h>
#include <stdlib.h>
#define  SIZE 10 
   
int main(viod) 
{
	int a[SIZE]={2,6,4,8,10,12,89,68,45,37};
	size_t i, pass;
	int hold;
	puts("Data items in original order");
	for(i=0;i<SIZE;++i)
	{
		printf("%4d", a[i]);
	}
	for(pass=1;pass<SIZE;++pass)
	{
		for(i=0;i<SIZE-1;++i)
		{
			if(a[i]>a[i+1])
			{
				hold=a[i];
				a[i]=a[i+1];
				a[i+1]=hold;
			}
		}
	}
	puts("\nData items in ascending order");
	for(i=0;i<SIZE;++i)
	{
		printf("%4d", a[i]);
	}
	puts("");
	system("PAUSE");
	return 0;
}
