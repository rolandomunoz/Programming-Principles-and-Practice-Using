// Written by Rolando Muñoz (2018-05-10)
// Takes an operation followed by two operands and outputs the results

#include <iostream>

using namespace std;

int main(){
  char operation;
  double operand_1, operand_2, result;
  bool print_result = 0;
  cout << "Enter an operation followed by two operands: ";
  
  while(cin >> operation >> operand_1 >> operand_2){
    if (operation == '+'){
      result = operand_1 + operand_2;
      print_result = 1;
    } else if (operation == '-'){
      result = operand_1 - operand_2;
      print_result = 1;
    } else if (operation == '*'){
      result = operand_1 * operand_2;
      print_result = 1;
    } else if (operation == '/'){
      result = operand_1 / operand_2;
      print_result = 1;
    } else {
      cout << "Result: Enter a valid operation +-*/";
      print_result = 0;
    }
  
    if (print_result){
      cout << "Result: " << result;
    }
    cout << "\nEnter an operation followed by two operands: ";
  }
  return 0;
}
