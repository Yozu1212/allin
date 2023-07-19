#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 

int main(void) {
    srand(time(NULL));
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {0, 0, 0, 0, 0};

    int min = 0;
    int max = 4;

    for (int i = 0; i < 3; i++) {//抽三個 
    int  x = rand() % (max - min + 1) + min;    
    
    if(b[x] == 1){ // 如果抽到的已經是1了 
	i--;	}// i-1 再抽一次 
	else{
	b[x] = 1; //不然讓 x位0變1 
		}
    }
		   printf("題目： ");
    for (int i = 0; i < 5; i++) {
    	
    	   printf("%d ", a[i]);
    	   }
    	    printf("\n我抽到的：");
    	   for (int i = 0; i < 5; i++) {
    	  if (b[i] == 0) { //印出B=0 
            printf("%d ", a[i]);
    	   }
       
        
    }

    return 0;
}

