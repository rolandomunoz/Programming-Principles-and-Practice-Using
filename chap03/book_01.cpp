// read and write a first name

#include <string>
#include <iostream>

using namespace std;

int main()
{
  string first_name;	// first name is a variable of type string
  cout << "Please enter you first name (followed by 'enter'): ";
  cin >> first_name;	// read characters into first_name
  cout << "Hello, " << first_name << "!\n";
}
