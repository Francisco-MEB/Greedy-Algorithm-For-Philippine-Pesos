#include "header.hpp"
#include <iostream>

int getAmountOwed()
{
    int amount{};
    do
    {
        if (amount < 0 || std::cin.fail())
        {
            std::cout << "Error: Invalid Input\n\n";
        }
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        
        std::cout << "Amount owed: ";
        std::cin >> amount;
        amount = static_cast<int>(amount);
    } while (amount < 0 || std::cin.fail());
    
    return amount;
}

int newAmountOwed(int previousAmountOwed, int quantity, int value)
{
    int updatedAmountOwed = previousAmountOwed - quantity * value;
    
    return updatedAmountOwed;
}

int getThousand(int amountOwed)
{
    int oneThousandBills{};
    while (amountOwed >= moneyConstants::oneThousand)
    {
        amountOwed = amountOwed - moneyConstants::oneThousand;
        oneThousandBills++;
    }
    
    return oneThousandBills;
}

int getFiveHundred(int amountOwed)
{
    int fiveHundredBills{};
    while (amountOwed >= moneyConstants::fiveHundred)
    {
        amountOwed = amountOwed - moneyConstants::fiveHundred;
        fiveHundredBills++;
    }
    
    return fiveHundredBills;
}

int getTwoHundred(int amountOwed)
{
    int twoHundredBills{};
    while (amountOwed >= moneyConstants::twoHundred)
    {
        amountOwed = amountOwed - moneyConstants::twoHundred;
        twoHundredBills++;
    }
    
    return twoHundredBills;
}

int getOneHundred(int amountOwed)
{
    int oneHundredBills{};
    while (amountOwed >= moneyConstants::oneHundred)
    {
        amountOwed = amountOwed - moneyConstants::oneHundred;
        oneHundredBills++;
    }
    
    return oneHundredBills;
}

int getFifty(int amountOwed)
{
    int fiftyBills{};
    while (amountOwed >= moneyConstants::fifty)
    {
        amountOwed = amountOwed - moneyConstants::fifty;
        fiftyBills++;
    }
    
    return fiftyBills;
}

int getTwenty(int amountOwed)
{
    int twentyBills{};
    while (amountOwed >= moneyConstants::twenty)
    {
        amountOwed = amountOwed - moneyConstants::twenty;
        twentyBills++;
    }
    
    return twentyBills;
}

int getTen(int amountOwed)
{
    int tenCoins{};
    while (amountOwed >= moneyConstants::ten)
    {
        amountOwed = amountOwed - moneyConstants::ten;
        tenCoins++;
    }
    
    return tenCoins;
}

int getFive(int amountOwed)
{
    int fiveCoins{};
    while (amountOwed >= moneyConstants::five)
    {
        amountOwed = amountOwed - moneyConstants::five;
        fiveCoins++;
    }
    
    return fiveCoins;
}

int getPiso(int amountOwed)
{
    int pisoCoins{};
    while (amountOwed >= moneyConstants::piso)
    {
        amountOwed = amountOwed - moneyConstants::piso;
        pisoCoins++;
    }
    
    return pisoCoins;
}

void toGive(int oneThousandBills, int fiveHundredBills, int twoHundredBills, int oneHundredBills, int fiftyBills, int twentyBills, int tenCoins, int fiveCoins, int pisoCoins)
{
    if (oneThousandBills > 0)
    {
        switch(oneThousandBills)
        {
            case 1:
                std::cout << oneThousandBills << " one thousand peso bill\n";
                break;
            default:
                std::cout << oneThousandBills << " one thousand peso bills\n";
        }
    }
    
    if (fiveHundredBills > 0)
    {
        switch(fiveHundredBills)
        {
            case 1:
                std::cout << fiveHundredBills << " five hundred peso bill\n";
                break;
            default:
                std::cout << fiveHundredBills << " five hundred peso bills\n";
        }
    }
    
    if (twoHundredBills > 0)
    {
        switch(twoHundredBills)
        {
            case 1:
                std::cout << twoHundredBills << " two hundred peso bill\n";
                break;
            default:
                std::cout << twoHundredBills << " two hundred peso bills\n";
        }
    }
    
    if (oneHundredBills > 0)
    {
        switch(oneHundredBills)
        {
            case 1:
                std::cout << oneHundredBills << " one hundred peso bill\n";
                break;
            default:
                std::cout << oneHundredBills << " one hundred peso bills\n";
        }
    }
    
    if (fiftyBills > 0)
    {
        switch(fiftyBills)
        {
            case 1:
                std::cout << fiftyBills << " fifty peso bill\n";
                break;
            default:
                std::cout << fiftyBills << " fifty peso bills\n";
        }
    }
    
    if (twentyBills > 0)
    {
        switch(twentyBills)
        {
            case 1:
                std::cout << twentyBills << " twenty peso bill\n";
                break;
            default:
                std::cout << twentyBills << " twenty peso bills\n";
        }
    }
    
    if (tenCoins > 0)
    {
        switch(tenCoins)
        {
            case 1:
                std::cout << tenCoins << " ten peso coin\n";
                break;
            default:
                std::cout << tenCoins << " ten peso coins\n";
        }
    }
    
    if (fiveCoins > 0)
    {
        switch(fiveCoins)
        {
            case 1:
                std::cout << fiveCoins << " five peso coin\n";
                break;
            default:
                std::cout << fiveCoins << " ten peso coins\n";
        }
    }
    
    if (pisoCoins > 0)
    {
        switch(pisoCoins)
        {
            case 1:
                std::cout << pisoCoins << " piso coin\n";
                break;
            default:
                std::cout << pisoCoins << " piso coins\n";
        }
    }
    
}


