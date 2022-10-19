#include <stdio.h>
#include "card.h"



EN_cardError_t getCardHolderName(ST_cardData_t* cardData)
{
	printf("Please enter the card holder's name:\n");
	cardData->cardHolderName = gets();
	printf("%s", cardData->cardHolderName);
	return 0
}
/*EN_cardError_t getCardExpiryDate(ST_cardData_t* cardData)
{

}
EN_cardError_t getCardPAN(ST_cardData_t* cardData)
{
	
}*/
