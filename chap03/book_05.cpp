// Get name and age
#include <iostream>
#include <string>

using namespace std;

int main(){
  cout << "Please enter your name and age\n";
  string first_name;
  double age;
  int age_in_months;
  cin >> first_name>>age;
  age_in_months = age*12;
  cout << "Hello, "<<first_name<<"(age "<<age_in_months<<" in months)\n";
  return 0;
}
