#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    srand(time(NULL));
    int n = (rand()%20);
    printf("%d",n);


return 0 ;
}