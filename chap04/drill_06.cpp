// Written by Rolando Muñoz (15-May-2018)
/*Drill06
 Description: Read one int values and report the largest and smallest. If both are equals, then print a message: 'the number are equeals' */

#include <iostream>
#include <vector>

using namespace std;

int main(){
  double value, largest_value, smallest_value;
  int counter = 0;
  
  // 
  while(true){
    ++ counter;
    cout << "Enter a number: ";
    cin >> value;

    if (counter == 1)
    {
      largest_value = value;
      smallest_value = value;
    }
    
    // Compare values
    if (value > largest_value){
      largest_value = value;
    } else if (value < smallest_value){
      smallest_value = value;
    }

    // Print results
    cout << "\nInserted value: "<< value << '\n';
    cout << "The smollest so far: " << smallest_value << '\n';
    cout << "The largest so far: " << largest_value << '\n';
    
  }
  return 0;
}
