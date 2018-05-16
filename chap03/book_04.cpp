// Get name and age

#include <iostream>
#include <string>

using namespace std;

int main(){
  cout << "Please enter your first and second names\n";
  string first_name;
  string second_name;
  cin >> first_name>>second_name;
  cout << "Hello, "<<first_name<<" "<<second_name<<'\n';
  return 0;
}
