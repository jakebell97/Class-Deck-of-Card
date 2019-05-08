#include "Jacob_Bell_Card.h"
#include <string>

Card::Card(int f, int s) : face{f}, suit{s} {}

std::string Card::toString() const
{
    return faceArr[face] + " of " + suitArr[suit];
}

std::string Card::faceArr[] = {"Ace",  "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine","Ten","Jack", "Queen", "King"};
std::string Card::suitArr[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
