#include<stdio.h>

int main(void){
int h = 0;
int n = 0;
printf("��J�̰��B�q:");
scanf("%d",&h);
printf("��J��e�B�q:");
scanf("%d",&n);

if(h>=n){
    printf("�S���W�L�̰����B�q ");
}

if(h<n){
    printf("���v�H�ӳ̰������B�q ");
    h = n ;
}

system("pause");
    return 0;
}
