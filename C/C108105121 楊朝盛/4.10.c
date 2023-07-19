#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
  
int main(int argc, char *argv[]) {
	int c,f,x;
    for(x = 30;x <= 136;x++)
	{
	printf("*",x);
	}
	printf("\n");
	printf("Äá¤ó");
	for(x = 30;x <= 50;x++)
	{
	printf("%d  ",x);
	}
	printf("\n");
	for(x = 30;x <= 136;x++)
	{
	printf("*",x);
	}
	printf("\n");
	printf("µØ¤ó");
	for(x = 30;x <= 50;x++)
	{
	f=9/5*x+32;
	printf("%d  ",f);
	}
	printf("\n");
	for(x = 30;x <= 136;x++)
	{
	printf("*",x);
	}
	system("PAUSE");
	return 0;
}
