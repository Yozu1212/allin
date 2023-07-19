#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int Maximun	(int x,int y,int z);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("³Ì¤j­È¬° %d\n",Maximun(78,89,52));
	return 0;
}

int Maximun	(int x,int y,int z)
{
	int Max=x;
	if(y>Max)
	{
		Max=y;
	}
	if(z>Max)
	{
		Max=z;
	}

}
