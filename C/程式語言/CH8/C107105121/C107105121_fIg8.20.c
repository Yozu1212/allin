#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char text[ 4 ][ 80 ];
 	char *tokenPtr;  
 	int i;  int counter = 0; 
    printf( "Enter 4 lines of text: \n" );
	for ( i = 0; i <= 3; i++ ) 
	{ 
	gets( &text[ i ][ 0 ] );  
	}
	for ( i = 0; i <= 3; i++ ) 
	{   
		tokenPtr = strtok( &text[ i ][ 0 ], " \n" );
		while ( tokenPtr ) 
		{   
			++counter;  tokenPtr = strtok( NULL, " \n" ); 
		}   
	} 
	printf( "\nThe total number of words is %d\n", counter );
	return 0;  
	} 

