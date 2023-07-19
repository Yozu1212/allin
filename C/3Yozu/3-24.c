#include<stdio.h>

int main(void){
	int a = 1;
	printf("N\t N^2\t N^3\t N^4\n \n"); 
	
	while(a<=10){
			printf("%d\t %d\t %d\t %d\n",a,a*a,a*a*a,a*a*a*a);
		a++;
	}

  return 0;
}

