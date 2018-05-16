// read and write a first name

#include <string>
#include <iostream>

using namespace std;

int main()
{
  string first_name, friend_name;	// first name is a variable of type string
  cout << "Enter the name of the person you want to write to: ";
  cin >> first_name;
  cout << "Enter the name of a friend: ";
  cin >> friend_name;

  cout << "Dear " << first_name << ",\n";
  cout << "\tHow are you? I am fine. I miss you\n";
  cout << "Mom told me that you were in Lima.\nI hope I can see you soon.\n";
  cout << "Have you seen " <<friend_name << " lately?\n";
}
