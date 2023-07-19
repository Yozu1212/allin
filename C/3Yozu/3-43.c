#include<stdio.h>

int main(void){
int a=0,b=0,c=0;
	printf("輸入三邊長:");
scanf("%d %d %d",&a,&b,&c);

if (a+b==c||b+c==a||a+c==b){
	printf("\n不是三角形");
}else
printf("\n是三角形");

system("pause");
return 0;
}


