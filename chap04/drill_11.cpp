// Written by Rolando Muñoz (15-May-2018)
/*Drill11
 Description: Read values in cm, m, inch and fts. Then report the largest and smallest in cm and the sum of them.*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
  // Initialize constants
  constexpr int m2cm = 100;
  constexpr double in2cm = 2.54;
  constexpr double ft2cm = 12*in2cm;
  
  // Declare variables
  double value, largest_value, smallest_value, sum = 0;
  string unit;
  int counter = 0;
  char exit = ' ';
  vector <double> value_list;
   
  while(true){
    ++ counter;
    cout << "Enter a number and its unit (cm, m, in, ft): ";
    cin >> value >> unit;

    if (unit == "cm")
    {
      value = value;
    } else if (unit == "m")
    {
      value = value*m2cm;
    } else if (unit == "in")
    {
      value = value*in2cm;
    } else if (unit == "ft")
    {
      value = value*ft2cm;
    } else {
      cout << "Please, insert a valid unit: cm, m, in or fit\n";
      continue;
    }

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
    
    value_list.push_back(value);
    sum += value;
    
    // Print results
    cout << "\nInserted value: "<< value << "cm\n";
    cout << "The smallest so far: " << smallest_value << "cm\n";
    cout << "The largest so far: " << largest_value << "cm\n";
    cout << "Press '|' to scape: ";
    cin >> exit;
    if (exit == '|'){
      break;
    }
  }
  cout << "\nTotal sum of valueS: " << sum<<"m\n";
  cout << "List of entered valies(cm): ";
  
  sort(value_list.begin(), value_list.end());
  
  for(double i:value_list){
    cout << i <<',';
  }
  
  return 0;
}
