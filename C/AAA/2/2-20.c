//
//  main.c
//  000\
//
//  Created by ±çºû­Û on 2023/3/1.
//
#include <stdio.h>

int main() {
    int totalseconds, h, m, _3g;

    printf("Enter total seconds: ");
    scanf("%d", &totalseconds);

    h= totalseconds / 3600;
    totalseconds %= 3600;
    m = totalseconds / 60;
    _3g = totalseconds % 60;

    printf("%d:%02d:%02d\n", h, m, _3g);
    
    return 0;
}


