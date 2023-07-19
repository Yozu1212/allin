#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    srand(time(NULL));
    int n = 100+(rand()%900);
    printf("%d",n);


return 0 ;
}