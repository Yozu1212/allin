#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    srand(time(NULL));
    int n = ((rand()%9)*2+3);
    printf("%d",n);

return 0 ;
}
