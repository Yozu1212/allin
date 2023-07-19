#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	printf("輸入第一個值\n");
	scanf("%d",&a);
	printf("輸入第二個值\n");
	scanf("%d",&b);
	if(a%b==0){
	printf("是\n");
	}
	if(a%b!=0){
	printf("否\n");
	}
	system("PAUSE");
	return 0;
}
