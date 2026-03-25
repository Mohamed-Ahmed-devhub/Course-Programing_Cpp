// 18. Computing the sum of all integers from 1 to any given integer. 
#include <iostream>
using namespace std;
int main() 
{
  int x,sum=0;
  
  cin >> x;
  
  for(int i=1; i<=x ; i++)
  {
    sum+=i;
    cout << sum << "\n";
  }
  return 0;
}