#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
    unsigned int sum=0;
    unsigned int number=2;
    for(number=2;number<=100;number+=2)
    {
    	sum+=number;
    	printf("Sumªº²Ö¥[­È is %u\n",sum);
	}
	return 0;
}
