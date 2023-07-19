#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char string1[ 20 ];
  	char string2[ 20 ];
 	int result; 
  	printf( "Enter two strings: " ); 
  	scanf( "%s%s", string1, string2 ); 
  	result = strcmp( string1, string2 ); 
  	if ( result > 0 )
   	{ 
   		printf( "\"%s\" is greater than \"%s\"\n", string1, string2 ); 
   	} 
  	else if ( result == 0 )
   	{ 
    	printf( "\"%s\" is equal to \"%s\"\n", string1, string2 );
	} 
  	else 
  	{ 
  		printf( "\"%s\" is less than \"%s\"\n", string1, string2 );  
	} 
	return 0;
}
