#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	printf("块计\n");
	scanf("%d",&a);
	if(a%2 == 0){
		printf("案计\n");
	}
	if(a%2 != 0){
		printf("计\n");
	}
	system("PAUSE");
	return 0;
}
