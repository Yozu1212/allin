#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
			int a;
	printf("輸入一個五位數\n");
	scanf("%d",&a);
	printf("%d %d %d %d %d\n",a/10000,(a%10000)/1000,(a%10000%1000)/100,a%10000%1000%100/10,a%10000%1000%100%10);
	system("PAUSE");
	return 0;
}
