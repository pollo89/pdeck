#include <string.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#include "pdeck.h"

int main ( int argc , char *argv[] ){
	pdeckCardType card;
	
	srand( (unsigned)time(NULL) );
	pdeckInit( );
	pdeckShuffle( DECK_CARD_MAX * 10 );
	for( ; pdeckGet( &card ) ; printf( "%d\n" , (unsigned int)card ) );
	
	return 0;
}
