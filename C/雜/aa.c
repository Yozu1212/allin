
#include <stdio.h>

int main() {
   int N = 10;
int  i=1;
   printf("N\t N^2\t n^3\t N^4\n");
   
   
   for( i=1; i<=N; i++) {
   printf("%d\t %d\t %d\t %d\n",i,i*i,i*i*i,i*i*i*i);
   }
   return 0;
}
