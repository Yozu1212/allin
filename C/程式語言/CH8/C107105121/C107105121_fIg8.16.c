#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char text[ 80 ];
 	char search[ 15 ]; 
 	char *searchPtr;  
  	printf( "Enter a line of text:\n" );  gets( text );
   	printf( "Enter a search string: " );  scanf( "%s", search );
    searchPtr = strstr( text, search );
	if ( searchPtr ) {  printf( "\n%s\n%s\"%s\":\n%s\n",  "The remainder of the line beginning with", "the first occurrence of ", search, searchPtr );
	searchPtr = strstr( searchPtr + 1, search );
	if ( searchPtr ) {  printf( "\n%s\n%s\"%s\":\n%s\n", "The remainder of the line beginning with","the second occurrence of ", search, searchPtr );  } 
	else { printf( "The search string appeared only once.\n" );  }   } 
	else {  printf( "\"%s\" not found.\n", search );  } 
	return 0;  
	} 

