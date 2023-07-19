#include<stdio.h>
#include<stdlib.h>

int main (int arge,char *argv[]) 
{
	double x=0,y=0;
	
	for(x=0;x<10;x+=0.2)
	{
		y=sin(x);
		printf("sin(%.2f)=%.2f\n",x,y);
	}

}
