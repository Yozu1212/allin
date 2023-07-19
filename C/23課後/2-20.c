#include<stdio.h>

int main(){
int t = 0;
int h = 0;
int m = 0;

printf("¿é¤J¬í¼Æ: ");
scanf("%d",&t);
h=t/3600;
m=(t%3600)/60;
t=t%60;

printf("%d:%d:%d\n",h,m,t);

system("pause");
return 0;
}
