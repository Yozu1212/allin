#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    srand(time(NULL));
    int n = 1000+(rand()%1222);
    printf("%d",n);


return 0 ;
}