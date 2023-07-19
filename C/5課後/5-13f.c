#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    srand(time(NULL));
    int n = (rand()%15)-3;//3+11+0
    printf("%d",n);


return 0 ;
}