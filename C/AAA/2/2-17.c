#include<stdio.h>

int main(void){
int u = 0;
int a = 0;
int t = 0;
int v=0;
int s=0;

printf("輸入初始速度:");
scanf("%d",&u);
printf("輸入加速度:");
scanf("%d",&a);
printf("輸入經過時間:");
scanf("%d",&t);

v=u+(a*t);
s=u*t+(0.5*a*t*t);

printf("(a)最終速度:%d\n(b)距離：%d ",v,s);

system("pause");
    return 0;
}
