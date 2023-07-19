#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j,k;
	printf("±×Ãä\tÃä1\tÃä2\n");
	for(i = 1;i <= 500;i++){
		for(j = 1;j <= 500;j++){
			for(k = 1;k <= 500;k++){
				if(i*i == j*j + k*k){
					printf("%d\t%d\t%d\t\n",i,j,k);
				}
			}
		}
	}
	system("PAUSE");
	return 0;
}
