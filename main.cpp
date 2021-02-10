/* Krimika Keemtee
 * CECS 282 - 05
 * Solitaire Prime!!
 * 02/09/2020
 * 
 * I certify that this program is my original work. I did not copy any
 * part of this program from any source. I further certify that I typed
 * each and every line of code in this program :))
*/

#include <iostream> //refers to the c++ system library
#include "Deck.h"
#include "Cards.h"
#include <clocale>
using namespace std;

//Here is the menu :)
void menu(){
  cout << "🂡" << " Welcome to Solitaire Prime! " << "🂡" << endl;
  cout << "1) New Deck" << endl;
  cout << "2) Display Deck" << endl;
  cout << "3) Shuffle Deck" << endl;
  cout << "4) Play Solitaire Prime" << endl;
  cout << "5) Exit" << endl;
} 

//this bool function checks if the number is prime or not
bool isPrime(int n){
  if (n == 0 || n == 1 || (n % 2 == 0 && n != 2)){
    return false;
  }
  
  else{
    for(int i = 3; i < n; i = i+2){  //here I am checking the odd #s
      if(n % i == 0){
        return false;
      }
    }
  }
  return true;

}

int main(){

  Deck myDeck;
  menu();
  int userInput;
  while (userInput < 5){
    cout << "\nPlease choose an option\n" ;
    cin >> userInput;

    if (userInput == 1){
      myDeck.refreshDeck();
      cout << "A new deck has been created! \n";
    }
    else if (userInput == 2){
      cout << "Here is your deck: \n";
      myDeck.showDeck();
    }
    else if (userInput == 3){
      myDeck.shuffle();
      cout << "The Deck has been shuffled! \n";
    }
    else if (userInput == 4){
      cout << "PLaying Solitaire Prime!!" << endl;
      int i = 0;
      int totVal = 0; //keeps track of the total value of cards after each round or as soon as it equals a prime number 
      int pile = 0;

      while (myDeck.cardsLeft() > 0){
        i ++; //keeps track of how many cards we have played
        Cards c1 = myDeck.deal();
        c1.showCard();
        c1.getValue(); 
        totVal += c1.getValue(); // adding the total value of all cards each turn 
        if(isPrime(totVal) == true){
          cout << "Prime: " << totVal << endl;
          pile ++;
          totVal = 0; //need to reset the totVal
        }
        if(i == 52 && totVal == 0){
          cout << "Winner in " << pile << " piles!" << endl; 
          i = 0;
        }
        else if(i == 52 && totVal > 0){
          cout << "Loser!" << endl;
          i = 0;
        }

      }
      myDeck.refreshDeck(); //once game is done the deck is back to normal
       
    }
    else if(userInput == 5){
      cout << "Thank you for playing!";
      break;
    }
  }

    return 0;
}

