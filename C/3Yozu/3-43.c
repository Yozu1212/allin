#include<stdio.h>

int main(void){
int a=0,b=0,c=0;
	printf("��J�T���:");
scanf("%d %d %d",&a,&b,&c);

if (a+b==c||b+c==a||a+c==b){
	printf("\n���O�T����");
}else
printf("\n�O�T����");

system("pause");
return 0;
}


