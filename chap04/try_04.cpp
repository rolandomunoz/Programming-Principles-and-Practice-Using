// Print [a-z] letters
// Written by Rolando Muñoz (12 May 2018)

#include <iostream>

using namespace std;

int main(){
    
  for(int i = 'a'; i<='z'; ++i){
    char letter = i;
    cout << letter<< '\t'<< i <<"\n";
  }
  return 0;
}
