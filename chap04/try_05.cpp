// Print [a-z] letters
// Written by Rolando Muñoz (12 May 2018)

#include <iostream>

using namespace std;

int square(int value){
  int sum = 0;
  for(int i = 0; i<value; ++i){
    sum +=value;
  }
  return sum;
}

int main(){
  for(int i = 0; i<10; ++i)
    cout << i << '\t'<< square(i) << '\n';
  return 0;
}


