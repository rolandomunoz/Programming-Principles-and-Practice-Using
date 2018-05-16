// Written by Rolando Muñoz (2018-05-10)
// Ouput three numerical values in order 

#include <iostream>

using namespace std;

int main(){
  int num_1, num_2, num_3;
  int position_1, position_2, position_3;

  cout << "Enter three integer numbers: ";
  while(cin >> num_1 >> num_2 >> num_3){    
    if (num_1 < num_2){
      position_1 = num_1;
      position_2 = num_2;
    } else {
      position_1 = num_2;
      position_2 = num_1;
      num_1 = position_1;
      num_2 = position_2;
    }
    
    if (num_2 < num_3){
      position_2 = num_2;
      position_3 = num_3;
    } else {
      position_2 = num_3;
      position_3 = num_2;    
      num_2 = position_2;
      num_3 = position_3;
    }

    if (num_1 < num_2){
      position_1 = num_1;
      position_2 = num_2;
    } else {
      position_1 = num_2;
      position_2 = num_1;
      num_1 = position_1;
      num_2 = position_2;
    }
    cout << "Result: " <<num_1<<", "<<num_2<<", "<<num_3;
    cout << "\n\nEnter three integer numbers: ";
  }
  return 0;
}
