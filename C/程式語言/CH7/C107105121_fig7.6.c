#include <stdio.h>
#include <stdlib.h>
int cubeByValue(int n);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int number = 5;
	
	printf("��l�ƭȬ�%d",number);
	
	number = cubeByValue(number);
	
	printf("\n�s���ƭȬ�%d\n",number);
}

int cubeByValue(int n)
{
	return n * n * n;
}
