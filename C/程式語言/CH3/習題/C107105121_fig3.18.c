#include<stdio.h>
#include<stdlib.h>

int main (int arge,char *argv[]) 
{
    float money;
    float get;
    while(money != -1)
	{
    printf("這週賣了多少錢(輸入-1即結束):");
    scanf("%f",&money);
	if(money == -1)
	{
		break;
	}
	get= 200 + (money * 0.09);
	printf("這週收入是:%.2f\n", get);
	}
system("PAUSE");
return 0;
}
