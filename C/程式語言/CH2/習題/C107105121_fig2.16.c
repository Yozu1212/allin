#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int num1,num2;
    printf("輸入一個數字\n");
    scanf("%d",&num1);
    printf("輸入一個數字\n");
    scanf("%d",&num2);
    printf("總和是%d\n",num1+num2); 
    printf("差是%d\n",num1-num2);
    printf("乘積是%d\n",num1*num2);
    printf("商是%d\n",num1/num2);
    printf("餘數是%d\n",num1%num2);
    system("PAUSE");
	return 0;
}
