#include<stdio.h>

int main(void){
int u = 0;
int a = 0;
int t = 0;
int v=0;
int s=0;

printf("��J��l�t��:");
scanf("%d",&u);
printf("��J�[�t��:");
scanf("%d",&a);
printf("��J�g�L�ɶ�:");
scanf("%d",&t);

v=u+(a*t);
s=u*t+(0.5*a*t*t);

printf("(a)�̲׳t��:%d\n(b)�Z���G%d ",v,s);

system("pause");
    return 0;
}
