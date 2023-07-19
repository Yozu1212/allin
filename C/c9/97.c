
#include <stdio.h>

int main(void )
{
    int x,y;
    scanf("%i %d", &x,&y);
    printf("%d %d\n", x, y);//10,10
    scanf("%i %d", &x,&y);
    printf("%d %d\n", x, y);//-10,-10
        scanf("%i %d", &x,&y);
    printf("%d %d\n", x, y);//8,10
        scanf("%i %d", &x,&y);
    printf("%d %d\n", x, y);//16,0
    
    return 0;
}

