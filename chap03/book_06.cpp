//simple program to exercise operators
#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main(){
  cout<<"Please enter a floating-point value: ";
  double n;
  cin>>n;
  cout<<"n == "<< n
  <<"\nthree times n == "<<3*n
  <<"\ntwice n == "<<n+n
  <<"\nhalf of n == "<<n/2
  <<"\nsquare root of n == "<<sqrt(n)
  <<'\n';
}
