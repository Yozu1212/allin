#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	printf("輸入一個數字\n");
	scanf("%d",&a);
	if(a%2 == 0){
		printf("為偶數\n");
	}
	if(a%2 != 0){
		printf("為奇數\n");
	}
	system("PAUSE");
	return 0;
}
