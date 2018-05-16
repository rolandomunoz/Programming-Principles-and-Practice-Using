// Print [a-z] letters
// Written by Rolando Muñoz (13 May 2018)

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
  vector<string> badWords {"puta madre", "mierda", "puta"};
  vector<string> wordList;
  
  cout << "Enter a list of words: ";
  for (string word; cin >> word;)
    wordList.push_back(word);

  cout << "\nList of words:\n";
  for(string word:wordList){
    for(string badWord:badWords){
      if (word == badWord){
        word = "BLEEP";
      }
    }
    cout << word <<'\n';
  }
  return 0;
}
