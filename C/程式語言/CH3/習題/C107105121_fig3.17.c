#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int ID;
	float money;
	float year;
	float rate;
	float pay;
	while(ID != -1)
	{
	printf("請輸入帳號(輸入-1即結束):");
	scanf("%d",&ID);
	if(ID == -1)
	{
		break;
	}
	printf("輸入抵押金額(用美元表示):");
	scanf("%f",&money);
	printf("輸入抵押期限(用年表示):");
	scanf("%f",&year);
	printf("輸入利率(用小數表示):");
	scanf("%f",&rate);
	pay=((money*rate*year)+money)/(12*year);
	printf("每月需支付%.0f\n",pay);
	}
	system("PAUSE");
	return 0;
}
