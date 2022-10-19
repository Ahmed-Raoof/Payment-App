#include <stdio.h>
#include "STD_TYPES.h"
#include "card\card.h"

int main()
{
	ST_cardData_t cardData;
	getCardHolderName(&cardData);
	return 0;
}