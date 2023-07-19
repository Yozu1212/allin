#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float i;
	float j = 3.141592;
	printf("輸入圓半徑:");
	scanf("%f",&i);
	printf("圓直徑為%.2f\n",i*2);
	printf("圓周長為%.2f\n",i*2*j);
	printf("圓面積為%.2f\n",i*i*j);
	system("PAUSE");
	return 0;
}
