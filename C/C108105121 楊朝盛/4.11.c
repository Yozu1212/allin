#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
  
int main(int argc, char *argv[]) {
	int x ,sum = 0;
	for( x = 7;x <= 100;x += 7){
		sum += x;
		printf("%d ",x);
	}
	printf("1到100 7的倍數和 %d\n",sum);
	system("PAUSE");
	return 0;
}
