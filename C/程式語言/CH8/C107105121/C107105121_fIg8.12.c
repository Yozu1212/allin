#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char *article[] = { "the", "a", "one", "some", "any" };
	char *noun[] = { "boy", "girl", "dog", "town", "car" }; 
	char *verb[] = { "drove", "jumped", "ran", "walked", "skipped" };
	char *preposition[] = { "to", "from", "over", "under", "on" };
	char sentence[20 ] = ""; 
    int i; 
	for ( i = 1; i <= 5; i++ ) 
	{ 
	    strcat( sentence, article[ rand() % 5 ] );
		strcat( sentence, " " );
	    strcat( sentence, noun[ rand() % 5 ] );
	    strcat( sentence, " " );
		strcat( sentence, verb[ rand() % 5 ] );
		strcat( sentence, " " );
		strcat( sentence, preposition[ rand() % 5 ] );
		strcat( sentence, " " );
		strcat( sentence, article[ rand() % 5 ] );
		strcat( sentence, " " );
		strcat( sentence, noun[ rand() % 5 ] );
		putchar( toupper( sentence[ 0 ] ) );
		printf( "%s.\n", &sentence[ 1 ] );
		sentence[ 0 ] = '\0';
	} 
	return 0;
}
