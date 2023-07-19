#include <stdio.h>
#include <math.h>

int main() {
	
    int a=1, b=1, k=1;
    for (a = 1; a <= 500; a++) {
        for (b = 1; b <= a; b++) {
            for (k = 1; k <= a; k++) {
            	
            	
                if ((a*a)==(b*b)+(k*k)){
				
                	
                    printf("±×Ãä %d ¨âÃä %d , %d\n", a, b ,k);
                }
            }
        }
    }
    return 0;
}
