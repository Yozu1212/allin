#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char stringValue[ 15 ];
    double sum = 0.0; 
    int i; 
    for ( i = 1; i <= 4; i++ ) 
	{  
	printf( "Enter a doubleing point string: " );
    gets( stringValue ); 
	sum += atof( stringValue );  
	} 
	printf( "\nThe total of the values is %f\n", sum );
return 0;
}
