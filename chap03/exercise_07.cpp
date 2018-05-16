// Written by Rolando Muñoz (2018-05-10)
// Ouput three words in alphabetical order 

#include <iostream>
#include <string>

using namespace std;

int main(){
  string word_1, word_2, word_3;
  string position_1, position_2, position_3;

  cout << "Enter three words: ";
  while(cin >> word_1 >> word_2 >> word_3){    
    if (word_1 < word_2){
      position_1 = word_1;
      position_2 = word_2;
    } else {
      position_1 = word_2;
      position_2 = word_1;
      word_1 = position_1;
      word_2 = position_2;
    }
    
    if (word_2 < word_3){
      position_2 = word_2;
      position_3 = word_3;
    } else {
      position_2 = word_3;
      position_3 = word_2;    
      word_2 = position_2;
      word_3 = position_3;
    }

    if (word_1 < word_2){
      position_1 = word_1;
      position_2 = word_2;
    } else {
      position_1 = word_2;
      position_2 = word_1;
      word_1 = position_1;
      word_2 = position_2;
    }
    cout << "Sorted words: "<<word_1<<", "<<word_2<<", "<<word_3;
    cout << "\n\nEnter three words: ";
  }
  return 0;
}
