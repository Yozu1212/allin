#include<stdio.h>
#include<stdlib.h>

int main (int arge,char *argv[]) 
{
	float pri;
	float rate;
	float day;
	float get;
	while(pri != -1)
	{
		printf("請輸入投入的錢(輸入-1即結束):");
		scanf("%f",&pri);
		if(pri ==-1)
		{
			break;
		}
		printf("請輸入利率");
		scanf("%f",&rate);
		printf("請輸入存放天數");
		scanf("%f",&day);
		get=(pri * rate * day)/365;
		printf("可得到%.2f\n",get);
	}
	system("PAUSE");
	return 0;
}
