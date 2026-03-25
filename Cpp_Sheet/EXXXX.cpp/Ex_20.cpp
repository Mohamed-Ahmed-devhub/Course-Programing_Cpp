// 20. Reading two integers x and y, then computing the sum of squares of 
// integers from x to y. 
#include <iostream>
#include<cmath>
using namespace std;
int main() 
{
  int x,y,sum=0;
  cin >> x >> y ;
  for(int i=1;i<=y;i++)
  {
    sum = sum + i*i;
    
  }cout << sum << "\n";
  return 0;
}