#include<stdio.h>

int main(void){
int a = 0;
int b = 0;
int c = 0;
printf("輸入第一個數:");
scanf("%d",&a);
printf("輸入第二個數:");
scanf("%d",&b);
c=a%b;
if(c != 0){
printf("非倍數");
}else{
 printf("倍數")  ;
}
 
    printf("\n");
    system("pause");
    return 0;
}
