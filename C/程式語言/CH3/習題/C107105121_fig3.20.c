#include<stdio.h>
#include<stdlib.h>

int main (int arge,char *argv[]) 
{
	float hour;
	float rate;
	while(hour != -1){
		printf("這週工作總時數(輸入-1即結束):");
		scanf("%f",&hour);
		if(hour == -1)
		{
			break;
		}
		printf("每小時的工資:");
		scanf("%f",&rate);
		if(hour <= 40)
		{
			printf("這週工資%.2f元",hour * rate);
		}
		else
		{
			printf("這週工資%.2f元\n",(rate*hour)+((hour-40)*(0.5*rate)));
		}
	}
	
	system("PAUSE");
	return 0;
}
