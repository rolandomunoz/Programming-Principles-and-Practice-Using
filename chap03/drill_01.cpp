// read and write a first name

#include <string>
#include <iostream>

using namespace std;

int main()
{
  string first_name;	// first name is a variable of type string
  cout << "Enter the name of the person you want to write to: ";
  cin >> first_name;	// read characters into first_name
  cout << "Dear " << first_name << ",\n";
}
