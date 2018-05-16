// Print [a-z] letters
// Written by Rolando Muñoz (12 May 2018)

#include <iostream>
#include <string>

using namespace std;

int main(){
  constexpr int n = 'z';
  int i = 'a';
  char letter = i;

  cout << "Number" << '\t' << "Letter" <<'\n';  
  while (i <= n){
    cout << i << '\t' << letter <<'\n';
    ++letter;
    ++i;
  }  
  return 0;
}
