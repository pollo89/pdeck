#include "pdeck.h"
#include <string.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

static pdeckCardType rest = 0;
static pdeckCardType deck[DECK_CARD_MAX];

int main ( int argc , char *argv[] ){
	pdeckCardType card;
	
	srand( (unsigned)time(NULL) );
	pdeckInit( );
	pdeckShuffle( DECK_CARD_MAX * 10 );
	for( ; pdeckGet( &card ) ; printf( "%d\n" , (unsigned int)card ) );
	
	return 0;
}

void pdeckInit( void ){
	pdeckCardType i;
	for( i=DECK_CARD_MAX ; i-- ; deck[i] = i );
	rest = DECK_CARD_MAX;
}

void pdeckShuffle( unsigned short shuffle ){
	pdeckCardType i , j;
	for( ; shuffle-- ; pdeckSwap( &deck[i] , &deck[j] ) ) {
		i = rand() % rest;
		j = rand() % rest;
	}
}

void pdeckSwap( pdeckCardType *pCard1 , pdeckCardType *pCard2 ){
	pdeckCardType cardTemp = *pCard1;
	*pCard1 = *pCard2;
	*pCard2 = cardTemp;
}

pdeckCardType pdeckGet( pdeckCardType *pCard ){
	pdeckCardType res = rest;
	res = rest;
	if( res ) {
		*pCard = deck[--rest];
	}
	return res;
}
