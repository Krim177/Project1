#ifndef CARDS_H 
#define CARDS_H
#include <iostream>
#include <string>
using namespace std;

class Cards{

    private:
        char rank;
        char suit;

    public:
        Cards();
        Cards(char r, char s);
        void setCards(char r, char s);
        int getValue();
        void showCard();

};

#endif