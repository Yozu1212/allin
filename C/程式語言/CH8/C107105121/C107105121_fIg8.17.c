#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char text[ 3 ][ 80 ];
	char search[ 20 ]; 
	char *searchPtr; 
    int count = 0; 
	int i;  
	int j;  
	printf( "Enter three lines of text:\n" );
	for ( i = 0; i <= 2; i++ ) 
	{
	  gets( &text[ i ][ 0 ] );  
	}
	for ( i = 0; i <= 2; i++ ) {
		for ( j = 0; text[ i ][ j ] != '\0'; j++ ) {
			text[ i ][ j ] = tolower( text[ i ][ j ] );
		}  
	} 
	printf( "\nEnter a search string: " ); 
	scanf( "%s", search );
	for ( i = 0; i <= 2; i++ ) { 
		searchPtr = &text[ i ][ 0 ];
		while ( searchPtr = strstr( searchPtr, search ) ) 
		{   
			++count;   searchPtr++;  
		}  
	}
	printf( "\nThe total occurrences of \"%s\" in the text is %d\n",  search, count );
	return 0;  
	} 

