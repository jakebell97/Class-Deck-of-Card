#ifndef JACOB_BELL_CARD_H_INCLUDED
#define JACOB_BELL_CARD_H_INCLUDED

#include <string>

class Card
{
public:
    // Constructor
    Card(int, int);

    // Function
    std::string toString() const;

private:
    int face;
    int suit;
    static std::string faceArr[];
    static std::string suitArr[];
};

#endif // JACOB_BELL_CARD_H_INCLUDED
