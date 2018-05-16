// Convert from USD, EUR, YEN and ARG into PEN
// Written by Rolando Muñoz (12 May 2018)

#include <iostream>
#include <string>

using namespace std;

int main(){
  constexpr double usd = 3.21; 
  constexpr double eur = 3.89;
  constexpr double yen = 33.60;
  
  double money;
  char coin;
    
  cout << "Enter the amount of money and coin (u=usd, e=eur, y=yen): ";
  cin >> money >> coin;
  
  switch (coin){
  case 'u':
    cout <<"You have " <<usd/money << "PEN";
    break;
  case 'e':
    cout << "You have "<<eur/money << "PEN";
    break;  
  case 'y':
    cout << "You have "<<yen/money << "PEN";
    break;
  default:
    cout << "Sorry, I don't know the called coin "<< coin<<'\n';
    break;
  }
  
  return 0;
}
