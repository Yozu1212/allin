#include<stdio.h>

int main(){
int t = 0;
int h = 0;
int m = 0;

printf("輸入秒數: ");
scanf("%d",&t);
h=t/3600;
m=t/60-(60*h);
t=t-(60*m)-(3600*h);

printf("時:分:小時\n   %d:%d:%d \n",h,m,t);

system("pause");
return 0;
}
