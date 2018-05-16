// Written by Rolando Muñoz (15-May-2018)
/*Drill03
 Description: Read two int values and report the larger and smaller of them. If both are equals, then print a message: 'the number are equeals' */

#include <iostream>
#include <vector>

using namespace std;

int main(){
  int value_a, value_b, larger_value, smaller_value = 0;
  bool report = 1;
  char exit = ' ';

  while(exit !='|'){
    report = 1;
    cout << "Enter two integer values: ";
    cin >> value_a >> value_b;
    
    // Compare values
    if (value_a > value_b)
    {
      larger_value = value_a;
      smaller_value = value_b;
    } 
    else if (value_a < value_b){
      larger_value = value_b;
      smaller_value = value_a;    
    } else {
      report = 0;
    }
    
    if (report){
      // Print the smaller and larger values
      cout << "The smaller value is: " << smaller_value << '\n';
      cout << "The larger value is: " << larger_value << '\n';
    } else {
      cout << "The number are equals\n";
    }
    // Ask if you want to exit
    cout << "Enter '|' to exit: ";
    cin >> exit;
    cout << "\n";
  }
  return 0;
}
