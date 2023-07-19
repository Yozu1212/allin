#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y,a,b,c,d;	
	for(x=1;x<=(9/2)+1;x++){
		for(a=((9+1)/2)-x;a>=1;a--){
			printf(" ");
		}
		for(b=1;b<=(2*x)-1;b++){
			printf("*");
		}
		printf("\n");
	}
	for(y=9/2;y>=1;y--){
		for(a=((9+1)/2)-y;a>=1;a--){
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
