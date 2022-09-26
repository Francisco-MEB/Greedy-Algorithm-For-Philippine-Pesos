#include "header.hpp"
#include <string.h>
#include <iostream>

int main()
{
    int amountOwed = getAmountOwed();
    
    int oneThousandPhp = getThousand(amountOwed);
    amountOwed = newAmountOwed(amountOwed, oneThousandPhp, moneyConstants::oneThousand);
    
    int fiveHundredPhp = getFiveHundred(amountOwed);
    amountOwed = newAmountOwed(amountOwed, fiveHundredPhp, moneyConstants::fiveHundred);
    
    int twoHundredPhp = getTwoHundred(amountOwed);
    amountOwed = newAmountOwed(amountOwed, twoHundredPhp, moneyConstants::twoHundred);
    
    int oneHundredPhp = getOneHundred(amountOwed);
    amountOwed = newAmountOwed(amountOwed, oneHundredPhp, moneyConstants::oneHundred);
    
    int fiftyPhp = getFifty(amountOwed);
    amountOwed = newAmountOwed(amountOwed, fiftyPhp, moneyConstants::fifty);
    
    int twentyPhp = getTwenty(amountOwed);
    amountOwed = newAmountOwed(amountOwed, twentyPhp, moneyConstants::twenty);
    
    int tenPhp = getTen(amountOwed);
    amountOwed = newAmountOwed(amountOwed, tenPhp, moneyConstants::ten);;
    
    int fivePhp = getFive(amountOwed);
    amountOwed = newAmountOwed(amountOwed, fivePhp, moneyConstants::five);
    
    int onePhp = getPiso(amountOwed);
    amountOwed = newAmountOwed(amountOwed, onePhp, moneyConstants::piso);
    
    toGive(oneThousandPhp, fiveHundredPhp, twoHundredPhp, oneHundredPhp, fiftyPhp, twentyPhp, tenPhp, fivePhp, onePhp);
    
    return 0;
}

