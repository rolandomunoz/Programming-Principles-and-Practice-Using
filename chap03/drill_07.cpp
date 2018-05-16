// read and write a first name

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

void simple_error(string message)
{
  cerr <<message<<"\n";
  exit(1);
}

int main()
{
  // Define variables
  string first_name, friend_name;	// first name is a variable of type string
  char friend_sex = '0';
  int age = 0;
  
  // Get user input
  cout << "Enter the name of the person you want to write to: ";
  cin >> first_name;
  cout << "How old is your recipient: ";
  cin >> age;
  
  // Check age
  if (age<0 || age>110)
  {
    simple_error("You are kidding");
  }
  
  cout << "Enter the name of a friend: ";
  cin >> friend_name;
  cout << "Is your friend male(m) or female(f): ";
  cin >> friend_sex;
  
  cout << "Dear " << first_name << ",\n";
  cout << "\tHow are you? I am fine. I miss you\n";
  cout << "Mom told me that you were in Lima.\nI hope I can see you soon.\n";
  cout << "Have you seen " <<friend_name << " lately?\n";
  if (friend_sex == 'm')
  {
    cout << "If you see "<< friend_name << ", please ask him to call me\n";
  } else if (friend_sex == 'f')
  {
    cout << "If you see "<< friend_name << ", please ask her to call me.\n";
  }
  if (age < 12){
    cout << "Next year you will be " << age++ << "\n";
  } else if (age == 17){
    cout << "The next year you will be able to vote.\n";
  } else if (age > 70){
    cout << "I hope you are enjoying retirement.\n";
  }
  cout << "\n\nYours sincerely,\n-Rolando Muñoz";
  return 0;
}
