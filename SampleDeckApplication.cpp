#include <iostream>
#include <string>
#include <iomanip>
#include "Jacob_Bell_Card.h"
#include "Jacob_Bell_DeckOfCards.h"

int main()
{
    DeckOfCards myDeck;
    int i = 0;

    myDeck.shuffle();

    while(myDeck.moreCards())
    {
        std::cout << std::left << std::setw(25) << myDeck.dealCard().toString();

        if(i % 4 == 3)
            std::cout << std::endl;

        i++;
    }

    std::cin.get();
    return 0;
}
