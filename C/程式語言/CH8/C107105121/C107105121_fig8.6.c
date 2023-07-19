#include <stdio.h>
#include <ctype.h>

int main()
{  
   char p[ 100 ];
   int i; 
   printf( "Enter a line of text:\n" );  
   gets( p );
   printf( "\nThe line in uppercase is:\n" ); 
   for ( i = 0; p[ i ] != '\0'; i++ ) 
{ 
   printf( "%c", toupper( p[ i ] ) );  } 
   printf( "\n\nThe line in lowercase is:\n" );
   for ( i = 0; p[ i ] != '\0'; i++ ) 
{
   printf( "%c", tolower( p[ i ] ) ); 
} 
	return 0; 
} 
