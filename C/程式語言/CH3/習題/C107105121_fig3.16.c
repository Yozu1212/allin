#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float i ;
	float j ;
	float a ;
	float b ;
	float k ;
	while(i != -1)
	{
	printf("輸入總營收(輸入-1即結束):");
	scanf("%f",&i);
	if(i == -1)
	{    
		break;
	}
	printf("輸入月份:");
	scanf("%f",&j);
	printf("總營收是:%.2f\n",i);
	a = i * 0.04;
	b = i * 0.05;
	printf("扣除稅金後的總額是:%.2f\n",i-a-b);
	printf("州稅金是%.2f\n",a);
	printf("郡稅金是%.2f\n",b);
	printf("扣除的稅金總額%.2f\n",a+b);
	}
	system("PAUSE");
	return 0;
}
