#ifndef DECK_H 
#define DECK_H
#include <iostream>
#include <string>
#include "Cards.h"
using namespace std;

class Deck{

    private:
        Cards deckOfCards[52];
        int topCard;
        
    public:
        Deck();
        void refreshDeck();
        Cards deal();
        void shuffle();
        int cardsLeft();
        void showDeck();

};

#endif