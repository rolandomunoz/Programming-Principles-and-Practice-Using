// Written by Rolando Muñoz (15-May-2018)
/*Drill02
 Description: Read two int values and report the larger and smaller of them.If both are equals, then print 0 in the report */

#include <iostream>
#include <vector>

using namespace std;

int main(){
  int value_a, value_b, larger_value, smaller_value;
  char exit = ' ';

  while(exit !='|'){
    larger_value = 0;
    smaller_value = 0;
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
    }
    
    // Print the smaller and larger values
    cout << "The smaller value is: " << smaller_value << '\n';
    cout << "The larger value is: " << larger_value << '\n';

    // Ask if you want to exit
    cout << "Enter '|' to exit: ";
    cin >> exit;
    cout << "\n";
  }
  return 0;
}
