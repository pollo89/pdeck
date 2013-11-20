#ifndef PDECK_H_
#define PDECK_H_

#ifndef DECK_CARD_MAX
//#define DECK_CARD_MAX	40
#define DECK_CARD_MAX	52
//#define DECK_CARD_MAX	54
//#define DECK_CARD_MAX	104
//#define DECK_CARD_MAX	108
#endif

typedef unsigned char pdeckCardType;

void pdeckInit( void );
void pdeckShuffle( unsigned short shuffle );
void pdeckSwap( pdeckCardType *pCard1 , pdeckCardType *pCard2 );
pdeckCardType pdeckGet( pdeckCardType *pCard );

#endif /* PDECK_H_ */
