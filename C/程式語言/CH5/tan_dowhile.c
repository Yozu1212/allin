#include<stdio.h>
#include<stdlib.h>

int main (int arge,char *argv[]) 
{
	double x=0,y=0;
	
	do
	{
		y=tan(x);
		printf("tan(%.2f)=%.2f\n",x,y);
		x+=0.2;
	}
	while(x<10);
}
