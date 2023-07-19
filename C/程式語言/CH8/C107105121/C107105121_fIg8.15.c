#include <stdio.h>
#include <stdlib.h>
void reverseTokens( char *sentence ); 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char text[ 80 ];
	printf( "Enter a line of text:\n" );
	gets( text );  reverseTokens( text );
	return 0;  
	} 
void reverseTokens( char *sentence ){   char *pointers[ 50 ]; 
	char *temp; 
	int count = 0; 
	int i; 
	temp = strtok( sentence, " " );
	while ( temp ) {   pointers[ count++ ] = temp; 
	temp = strtok( NULL, " " ); } 
	printf( "The tokens in reverse order are:\n" );
	for ( i = count - 1; i >= 0; i-- ) {printf( "%s ", pointers[ i ] );   } 
	}	
	
