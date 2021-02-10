#include <iostream>
#include "Deck.h"
using namespace std;

//Creats a deck of cards in order from Ace to King with its respective suits
Deck::Deck(){

  topCard = 0; 

  char rank[13] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};
  char suit[4] = {'S', 'H', 'D', 'C'};
  int loc = 0;
  for(int i = 0; i <4; i++){
    for(int j = 0; j < 13; j++){
      deckOfCards[loc++] = Cards(rank[j], suit[i]);
    }
  }
    
}

//refreshes the whole deck 
void Deck::refreshDeck(){
  topCard = 0;
  Deck();
}

//Keeps track of the top card within the deck
Cards Deck ::deal(){ 
  return deckOfCards[topCard++];

}

//shuffles the whole deck
void Deck::shuffle(){
  srand(time(NULL)); 
    for (int i = 0; i < 1000; i++){

        int x = rand() % 52; 
        int y = rand() % 52;

        Cards temp = deckOfCards[x];
        deckOfCards[x] = deckOfCards[y];
        deckOfCards[y] = temp;

    }
}

//Determines the number of cards left within the deck
int Deck::cardsLeft(){
  return 52-topCard;
}

//Displays the deck using a for loop
void Deck::showDeck(){
    for (int i = 0; i < 52; i++){
        if (i%13 == 0){
          cout << endl;
        }
         deckOfCards[i].showCard();
    }
    cout << endl;
  
}

