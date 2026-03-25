// Computing  𝑥𝑦  for any given two integers x and y.
#include <iostream>
#include<cmath>
using namespace std;
int main() 
{
  int x,y;
  long long res=1 ;
  cin >> x >> y ;
  for(int i=1; i<=y; i++)
  {
    res = res * x;
    cout << res <<endl;
  }
  return 0;
}