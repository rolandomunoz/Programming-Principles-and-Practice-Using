// Read first and second name

#include<iostream>
#include<string>

using namespace std:

int  maint(){
  cout << "Please enter your first and second names\n";
  string first;
  string second;
  cin>>string>>second;
  string name = first + ''+ second;
  cout<<"Hello, "<<name<<'\n';
  return 0;
}

