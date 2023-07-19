#include<stdio.h>
#include<stdlib.h>

int main (int arge,char *argv[]) 
{
	double x=0,y=0;
	
	while(x<10)
	{
		y=sin(x);
		printf("sin(%.2f)=%.2f\n",x,y);
		x+=0.2;
	}
}
