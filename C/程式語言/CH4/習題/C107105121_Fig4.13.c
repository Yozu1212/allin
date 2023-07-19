#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y,i,j,k;
	printf("輸入1個自然數(1到100以內)");
	scanf("%d",&x);
	for(y = 1;y <=x;y++){
		i += y;
	} 
	for(y = 1;y <=x;y++){
		j = y*y;
	}
	for(y = 1;y <=x;y++){
		k = y*y*y;
	}
	printf("總和=%d\n",i);
	printf("平方和=%d\n",j);
	printf("立方和=%d\n",k);
	system("PAUSE");
	return 0;
}
