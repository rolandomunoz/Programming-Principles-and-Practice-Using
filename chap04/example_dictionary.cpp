// Create a dictionary
// Written by Rolando Muñoz

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  vector<string> words;
  
  // Enter a list of words
  cout << "Enter a list of words: ";
  for(string temp; cin>>temp;)
    words.push_back(temp);
  
  // Report the total number of words
  int n = words.size();
  cout << "Number of words: " << n << '\n';
  
  // 
  sort(words.begin(), words.end());
  for(unsigned int i = 0; i < words.size(); ++i){
    if (i==0 || words[i-1]!=words[i]) //Is this a new word?
      cout << words[i] << '\n';
  }
  return 0;
}
