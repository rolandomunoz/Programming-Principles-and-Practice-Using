// Written by Rolando Muñoz (13-May-2018)
// Read two ints and prints them.

#include <iostream>
#include <iostream>
#include <vector>

using namespace std;

int main(){
  int value_a, value_b;
  char exit = ' ';

  while(exit !='|'){
    cout << "Enter two integer values: ";
    cin >> value_a >> value_b;
    cout << "Result: "<< value_a << '\t' << value_b << '\n';
    cout << "Enter '|' to exit: ";
    cin >> exit;
  }
  return 0;
}
