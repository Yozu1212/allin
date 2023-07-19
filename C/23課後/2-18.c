#include<stdio.h>

int main(void){
int h = 0;
int n = 0;
printf("輸入最高雨量:");
scanf("%d",&h);
printf("輸入當前雨量:");
scanf("%d",&n);

if(h>=n){
    printf("沒有超過最高降雨量 ");
}

if(h<n){
    printf("有史以來最高的降雨量 ");
    h = n ;
}

system("pause");
    return 0;
}
