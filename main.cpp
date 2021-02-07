#include <iostream> //refers to the c++ system library
#include "Deck.h"
#include "Cards.h"
using namespace std;

int main(){

    //srand(time(NULL)); 
    Deck myDeck;
    cout << "Original Array: \n";
    myDeck.showDeck();

    // for (int i = 0; i < 52; i++){

    //     cout << deckOfCards[i] << endl;
    // }

    // cout << "The shuffled Array:" << endl;
    // shuffle(deckOfCards, 52);


    return 0;
}