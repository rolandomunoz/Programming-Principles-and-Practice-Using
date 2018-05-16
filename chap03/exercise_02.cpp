// Written by Rolando Muñoz (2018-05-10)
// Convert from miles to kilometers
#include <iostream>

using namespace std;

int main(){
  double miles, kilometers;
  cout << "Convert from miles to kilometers\n";
  cout<< "Enter a number in miles: ";
  while (cin >> miles){
    // Convertion
    kilometers = miles * 1609;
    // Print results
    cout << "Result: " << kilometers << "\n\n";

    // Ask again
    cout << "Convert from miles to kilometers\n";
    cout<< "Enter a number in miles: ";
  }
  return 0;
}
