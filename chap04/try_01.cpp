// Convert from USD, EUR, YEN and ARG into PEN
// Written by Rolando Muñoz (12 May 2018)

#include <iostream>
#include <string>

using namespace std;

int main(){
  constexpr double usd = 3.21; 
  constexpr double eur = 3.89;
  constexpr double yen = 33.60;
  
  char money;
  char coin;
  
  cout << "Enter the amount of money and coin (u=usd, e=eur, y=yen): ";
  cin >> money >> coin;
  
  if(coin == 'u')
    cout <<"You have " <<usd/money << "PEN\n";
  else if (coin == 'e')
    cout <<"You have " <<eur/money << "PEN\n";
  else if (coin == 'y')
    cout <<"You have " <<yen/money << "PEN\n";
  else
    cout << "Sorry, I don't know the called coin "<< coin<<'\n';
    
  return 0;
}
