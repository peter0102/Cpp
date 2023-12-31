#ifndef CARD_H
#define CARD_H
#include <iostream>
#include <string>

using namespace std;

class Card {
public:
        Card(const string& cardName) : cardName(cardName) {}
        virtual void displayInfo() const = 0;

    string cardName;
};
#endif