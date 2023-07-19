#include <stdio.h>


int main() {
 int x = 1;
	
	for (x = 1 ; x <=10 ; ++x ){
		
		if(x==5){
			break;
		}
		printf("%u",x);
		
	}
	printf("\nBroke out of loop at x == %u\n",x);
}
