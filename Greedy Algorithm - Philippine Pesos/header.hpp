#ifndef header_hpp
#define header_hpp

int getAmountOwed();
int newAmountOwed(int previousAmountOwed, int quantity, int value);
int getThousand(int amountOwed);
int getFiveHundred(int amountOwed);
int getTwoHundred(int amountOwed);
int getOneHundred(int amountOwed);
int getFifty(int amountOwed);
int getTwenty(int amountOwed);
int getTen(int amountOwed);
int getFive(int amountOwed);
int getPiso(int amountOwed);
void toGive(int oneThousandBills, int fiveHundredBills, int twoHundredBills, int oneHundredBills, int fiftyBills, int twentyBills, int tenCoins, int fiveCoins, int pisoCoins);

namespace moneyConstants
{
    const int oneThousand = 1000;
    const int fiveHundred = 500;
    const int twoHundred = 200;
    const int oneHundred = 100;
    const int fifty = 50;
    const int twenty = 20;
    const int ten = 10;
    const int five = 5;
    const int piso = 1;
}

#endif
