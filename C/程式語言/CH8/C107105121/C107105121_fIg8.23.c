#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i; 
	char array[ 5 ][ 20 ]; 
	for ( i = 0; i <= 2; i++ ) {   
		printf( "Enter a string: " );
		scanf( "%s", &array[ i ][ 0 ] );
	} 
	printf( "\nThe strings open with th are:\n" );
	for ( i = 0; i <= 4; i++ ) 
	{	 
		if (   strstr( &array[ i ][ 0 ], "th" ) ) 
		{
			printf( "%s\n", &array[ i ][ 0 ] );  
		}  
	} 
	return 0;  
} 

