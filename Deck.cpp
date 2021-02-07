#include <iostream>
#include "Deck.h"
using namespace std;

Deck::Deck(){

  //Created a for loop to determine the suit for each of the cards
  char suit;
  cout << suit << endl;
  int loc = 0;
  for (int s =0; s < 4; s++){
    if (s == 0){
      suit = 'S';
      loc = 0 + s; 
      break;
    }
    if(s == 1){
      suit = 'H';
      loc = 0 + s;
      break;
    }
    if(s == 2){
      suit = 'D';
      loc = 0 + s;
      break;
    }
    if(s == 3){
      suit = 'C';
      loc = 0 + s;
      break;
    }
    else{
      suit = 'N';
      loc = 0 + s;
      break;
    }
  }

  //To calculate the aces:
  deckOfCards[loc*13] = Cards('A', suit);

  //Now every 12th index, our suit changes and it is an ACE on the 13th
  
  
    // //for(int i = 0; i < 4; i++){
    //   for(int ra = 1; ra < 8; ra++){
    //     char suit;
    //     int newSuitLoc = ra + 13; //idk howto use recursion :/
    //     char a = '0' + (ra + 1); //cant have the rank as int!
    //     //if (i == 0){
    //       suit = 'S';
    //       deckOfCards[0] = Cards('A', suit);
    //       deckOfCards[ra] = Cards(a, suit);
    //       deckOfCards[9] = Cards('T', suit);
    //       deckOfCards[10] = Cards('J', suit);
    //       deckOfCards[11] = Cards('Q', suit);
    //       deckOfCards[12] = Cards('K', suit);
    //       break;
    //     //}
    //     //if (i == 1){
    //       suit = 'H';
    //       deckOfCards[13] = Cards('A', suit);
    //       deckOfCards[newSuitLoc] = Cards(a, suit);
    //       deckOfCards[9+newSuitLoc] = Cards('T', suit);
    //       deckOfCards[10+newSuitLoc] = Cards('J', suit);
    //       deckOfCards[11+newSuitLoc] = Cards('Q', suit);
    //       deckOfCards[12+newSuitLoc] = Cards('K', suit);
    //       break;
    //     //}
    //     //if (i == 2){
    //       suit = 'D';
    //       deckOfCards[25] = Cards('A', suit);
    //       deckOfCards[newSuitLoc + 13] = Cards(a, suit);
    //       deckOfCards[9+(newSuitLoc*2)] = Cards('T', suit);
    //       deckOfCards[10+(newSuitLoc*2)] = Cards('J', suit);
    //       deckOfCards[11+(newSuitLoc*2)] = Cards('Q', suit);
    //       deckOfCards[12+(newSuitLoc*2)] = Cards('K', suit);
    //       break;
    //     // }
    //     // if (i == 3){
    //       suit = 'C';
    //       deckOfCards[37] = Cards('A', suit);
    //       deckOfCards[newSuitLoc + (13*2)] = Cards(a, suit);
    //       deckOfCards[9+(newSuitLoc*3)] = Cards('T', suit);
    //       deckOfCards[10+(newSuitLoc*3)] = Cards('J', suit);
    //       deckOfCards[11+(newSuitLoc*3)] = Cards('Q', suit);
    //       deckOfCards[12+(newSuitLoc*3)] = Cards('K', suit);
    //       break;
    //     // }
    //     // else{
    //       suit = 'N';
    //       deckOfCards[0] = Cards('0','0'); //idk if I can do this !!!!!!
    //     // }
        
      //}
    //}

    topCard = 0; 
}

void Deck::refreshDeck(){
  topCard = 0;
  Deck();
}

Cards Deck ::deal(){ 
  return deckOfCards[topCard++];

}

void Deck::shuffle(Cards a1[], int size){
    for (int i = 0; i < 1000; i++){

        int x = rand() % size;
        int y = rand() % size;

        Cards temp = a1[x];
        a1[x] = a1[y];
        a1[y] = temp;

    }
}

int Deck::cardsLeft(){
  return 52-topCard;
}

void Deck::showDeck(){
    //cout <<  deckOfCards << endl;
    //FIXME!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    for (int i = 0; i < 52; i++){
         deckOfCards[i].showCard();
    }
  
}

