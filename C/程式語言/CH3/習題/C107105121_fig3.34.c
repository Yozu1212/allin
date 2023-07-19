#include<stdio.h>
#include<stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main (int arge,char *argv[]) 
{
	int i;
	int j;
	int k; 
    for(i=1,j=1;i<=11;i++) 
    { 
        for(k=1;k<i;k++,j++) 
            printf("%d\t",j); 
    printf("\n"); 
    } 
	system("PAUSE");
	return 0;
}
