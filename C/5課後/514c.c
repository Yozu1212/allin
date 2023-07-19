#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    srand(time(NULL));
    int n = ((rand()%7)*5+3);
    printf("%d",n);

return 0 ;
}
