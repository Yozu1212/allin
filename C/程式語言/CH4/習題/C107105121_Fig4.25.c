#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,A,a,B,b,C,c,D,d,E,e,F,f,G,g,H,h,I,i;
	unsigned int y;
	for (x = 1; x <= 256; x += 1)
	{
	A = x / 2;
	a = x % 2;
	B = A / 2;
	b = A % 2;
	C = B / 2;
	c = B % 2;
	D = C / 2;
	d = C % 2;
	E = D / 2;
	e = D % 2;
	F = E / 2;
	f = E % 2;
	G = F / 2;
	g = F % 2;
	H = G / 2;
	h = G % 2;
	I = H / 2;
	i = H % 2;
	y = i * 100000000 + h * 10000000 + g * 1000000 + f * 100000 + e * 10000 + d * 1000 + c * 100 + b * 10 + a;
	printf("%d\t%u\t%o\t%x\n", x, y, x, x);
	}
    system("PAUSE");
	return 0;
}
