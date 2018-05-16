/   / Print [a-z] letters
// Written by Rolando Muñoz (12 May 2018)

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  vector<double> temps;
  double sum = 0;
  
  // Get data
  for (double temp; cin>>temp;)
    temps.push_back(temp);
    
  for(double i:temps)
    sum += i;

  int n = temps.size();
  double mean = sum/n;   // Report mean      
  
  sort(temps.begin(), temps.end());   // Report median
  double median = temps[n/2];
  
  cout << "Mean: "<< mean << '\n';
  cout << "Median: "<< median;
  return 0;
}
