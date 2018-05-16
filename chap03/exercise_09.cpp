// Written by Rolando Muñoz (2018-05-10)
// Test if an integer value is odd or even

#include <iostream>

using namespace std;

int main(){
  int value;
  bool is_orth_value = 0;
  string orth_value;
  cout << "Enter a value number: ";
  
  while(cin >> orth_value){
    is_orth_value = 0;
    
    if (orth_value == "zero"){
      value = 0;
      is_orth_value = 1;
    }else if (orth_value == "one"){
      value = 1;
      is_orth_value = 1;
    }else if (orth_value == "two"){
      value = 2;
      is_orth_value = 1;
    }else if (orth_value == "three"){
      value = 3;
      is_orth_value = 1;
    }else if (orth_value == "four"){
      is_orth_value = 1;
      value = 4;
    }
  
    if (is_orth_value){
      cout << "Value in number: " << value << '\n';
    } else {
      cout << "Not a number I know.\n";
    }
    cout << "\nEnter a value number: ";
  }
  return 0;
}
