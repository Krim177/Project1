
#include <iostream>
#include <string>
#include "Cards.h"
using namespace std;

//The default constructor of card 
Cards::Cards(){
    rank = '0';
    suit = '0';
}

//Constructor that assigns rank to r and suit to s
Cards::Cards(char r, char s){
    rank = r;
    suit = s;

}
//setting the cards rank and suit
void Cards::setCards(char r, char s){
    this -> rank = r;
    this -> suit = s;
}

//gets the value of each card to calculate if it will be prime #
int Cards::getValue(){ 
    if(rank == 'A'){
      return 1;
    }
    else if (rank == 'T' || rank =='J' || rank == 'Q' || rank =='K'){
      return 10;
    }
    else{
      return (int)rank - 48;// we need to sub 48 cause digits in ascii start @48, it was giving me the bit val of chars as well :/
    }  
    return 0;
}

//displays the individual cards (I used the symbols!!! :))
void Cards::showCard(){
    if(rank == 'T' && suit == 'H'){
      cout << 10 << "\u2665" << " "; 
    }
    else if(rank == 'T' && suit == 'S'){
      cout << 10 << "\u2660" << " ";
    }
    else if(rank == 'T' && suit == 'D'){
      cout << 10 << "\u2666" << " ";
    }
    else if(rank == 'T' && suit == 'C'){
      cout << 10 << "\u2663" << " ";
    }
    else if(suit == 'H'){
      cout << rank << "\u2665" << " ";
    }
    else if(suit == 'S'){
      cout << rank << "\u2660" << " ";
    }
    else if(suit == 'D'){
      cout << rank << "\u2666" << " ";
    }
    else{
      cout << rank << "\u2663" << " ";
    }
 }


