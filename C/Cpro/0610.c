#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 

int main(void) {
    srand(time(NULL));
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {0, 0, 0, 0, 0};

    int min = 0;
    int max = 4;

    for (int i = 0; i < 3; i++) {//��T�� 
    int  x = rand() % (max - min + 1) + min;    
    
    if(b[x] == 1){ // �p�G��쪺�w�g�O1�F 
	i--;	}// i-1 �A��@�� 
	else{
	b[x] = 1; //���M�� x��0��1 
		}
    }
		   printf("�D�ءG ");
    for (int i = 0; i < 5; i++) {
    	
    	   printf("%d ", a[i]);
    	   }
    	    printf("\n�ک�쪺�G");
    	   for (int i = 0; i < 5; i++) {
    	  if (b[i] == 0) { //�L�XB=0 
            printf("%d ", a[i]);
    	   }
       
        
    }

    return 0;
}

