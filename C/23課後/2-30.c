#include<stdio.h>

int main(){
int a = 0;
int b = 0;
int c = 0;
int d = 0;
int e = 0;
 printf("¿é¤J:");
scanf("%d",&a);

    b=a/10000;
    a=a%10000;
    c=a/1000;
    a=a%1000;
    d=a/100;
    a=a%100;
    e=a/10;
    a=a%10;


    printf("%d   %d   %d   %d   %d  ",b,c,d,e,a);

    
    system("pause");
    return 0;
}
