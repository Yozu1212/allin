#include<stdio.h>

int main(void){
int a = 0;
printf("輸入一個整數:");
scanf("%d",&a);

if(a%2== 0){
printf("偶數\n");
}
else{
    printf("奇數\n");  
    } 
system("pause");
return 0;
}
