#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
  
int main(int argc, char *argv[]) {
	int i,j;
	printf("1到100的質數為:\n");
	for(i = 1;i <= 100;i++){
		for(j = 2;j <= i;++j){
			if(i % j == 0){
				break;
			}
		}
		if(i == j){
			printf("%d ",i);
		}
	}
	system("PAUSE");
	return 0;
}
