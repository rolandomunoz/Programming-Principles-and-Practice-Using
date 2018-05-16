// Written by Rolando Muñoz (2018-05-10)
// Test if an integer value is odd or even

#include <iostream>

using namespace std;

int main(){
  int value, residual;
  string type_number;
  cout << "Enter a value number: ";
  
  while(cin >> value){    
    type_number = "ODD";
    residual = value % 2;
    if(residual == 0){
      type_number = "EVEN";
    }
    cout << "The value " << value << " is an " << type_number << " number\n";
    cout << "\nEnter a value number: ";
  }
  return 0;
}
