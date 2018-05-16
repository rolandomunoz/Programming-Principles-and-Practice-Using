//Detects adjacent repeated words in sequence of words

#include<iostream>
#include<string>

using namespace std;

int main(){
  string previous = "";
  string current;
  int counter = 0;
  while (cin>>current){
    ++counter;    
    if (current == previous)
      cout << "repeated word: "<<current<<"("<<counter<<")"<<'\n';
  previous = current;
  }
}
