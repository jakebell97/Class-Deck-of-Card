#include "Jacob_Bell_Card.h"
#include "Jacob_Bell_DeckOfCards.h"
#include <vector>
#include <ctime>
#include <stdlib.h>



DeckOfCards::DeckOfCards()
{
    for(int i = 0; i < 13; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            Card c(i, j);
            deck.push_back(c);
        }
    }
}

void DeckOfCards::shuffle()
{
    srand(time(NULL));

    for(int i = 0; i < 52; i++)
    {
        int r = rand() % 52;

        Card temp = deck[i];
        deck[i] = deck[r];
        deck[r] = temp;
    }
}

Card DeckOfCards::dealCard()
{
    return deck[currentCard++];
}

bool DeckOfCards::moreCards()
{
    if(currentCard < 52)
        return true;
    else
        return false;
}
