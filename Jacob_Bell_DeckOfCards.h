#ifndef JACOB_BELL_DECKOFCARDS_H_INCLUDED
#define JACOB_BELL_DECKOFCARDS_H_INCLUDED

#include <vector>
#include "Jacob_Bell_Card.h"

class DeckOfCards
{
public:
    // Constructor
    DeckOfCards();

    // Functions
    void shuffle();
    Card dealCard();
    bool moreCards();

private:
    std::vector<Card> deck;
    int currentCard = 0;
};


#endif // JACOB_BELL_DECKOFCARDS_H_INCLUDED
