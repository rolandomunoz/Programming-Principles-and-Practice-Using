// Written by Rolando Muñoz (2018-05-10)
// Report numeric operations
#include <iostream>

using namespace std;

int main(){
  double val_1, val_2, smaller, larger, sum, diff, product, ratio;
  cout << "Enter two natural numbers: ";
  while(cin >> val_1 >> val_2){
    //smaller and larger number
    if (val_1 == val_2){
      smaller = 0;
      larger = 0;
    }else if(val_1 < val_2){
      smaller = val_1;
      larger = val_2;
    } else{
      smaller = val_2;
      larger = val_1;
    }
    sum = val_1 + val_2; //sum
    diff = val_1 - val_2; //difference
    product = val_1 * val_2; //product
    ratio = val_1/val_2; //ratio
    
    // Print results
    cout << "Smaller number: " << smaller << "\n";
    cout << "Larger number: " << larger << "\n";
    cout << "Sum: " << sum << "\n";
    cout << "Differences: " << diff << "\n";
    cout << "Product: " << product << "\n";
    cout << "Ratio: " << ratio << "\n";

    // Print next message
    cout << "\nEnter two natural numbers: ";
  }
  return 0;
}
