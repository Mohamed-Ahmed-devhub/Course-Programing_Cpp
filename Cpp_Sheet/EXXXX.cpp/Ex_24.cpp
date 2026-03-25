// 24. Printing the Fahrenheit-Celsius table for F = 0, 20, 30... 300. Use the 
// following equation: 
// ℃=(5/9)∗(℉−32) 
#include <iostream>
using namespace std;
int main() 
{
  double result;
  for(int i=0; i<=300; i+=10)
  {
    result = (5.0/9.0)*(i-32.0);
    cout << i << " = " << result <<endl;
  }
  return 0;
}