#include<stdio.h>

int main(void){
int n=1,all=1,r=0;
printf("��J�@�ӫD�t���:");
scanf("%d",&n);

if (n==0) {
printf("ANS:1");}

else{
while(n>0){
all=n*all;
n=n-1;}
printf("ANS:%d",all);}

system("pause");
return 0;
}
