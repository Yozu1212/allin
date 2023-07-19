#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int Minimun	(int x,int y,int z);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("³Ì¤p­È¬° %d\n",Minimun(78,89,52));
	return 0;
}

int Minimun	(int x,int y,int z)
{
	int Min=x;
	if(y<Min)
	{
		Min=y;
	}
	if(z<Min)
	{
		Min=z;
	}
	return Min;
}
