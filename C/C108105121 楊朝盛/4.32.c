#include <stdio.h>
#include <stdlib.h>
  
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y,z,a,b,c,d;
	printf("請輸入菱形的列數(只能1到19，必須為奇數): ");
	scanf("%d",&z);
	for(x=1;x<=(z/2)+1;x++){
			for(a=((z+1)/2)-x;a>=1;a--){
				printf(" ");
			}
			for(b=1;b<=(2*x)-1;b++){
				printf("*");
			}
			printf("\n");
	}
	for(y=z/2;y>=1;y--){
		for(a=((z+1)/2)-y;a>=1;a--){
			printf(" ");
		}
		for(b=1;b<=(2*y)-1;b++){
		printf("*");
		}
		printf("\n");
	}
	system("PAUSE");
	return 0;
}
