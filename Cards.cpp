
#include <iostream>
#include <string>
#include "Cards.h"
using namespace std;

Cards::Cards(){

    rank = '0';
    suit = '0';
}

Cards::Cards(char r, char s){
    rank = r;
    suit = s;

}

void Cards::setCards(char r, char s){
    this -> rank = r;
    this -> suit = s;
}

int Cards::getValue(){
    return 0;//!!!!!!!!!!!!!!!! FIX MEEEEEE
}

void Cards::showCard(){
     cout << rank << suit << " ";
 }


