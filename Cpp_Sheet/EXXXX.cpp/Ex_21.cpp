// 21. Finding the maximum/minimum of a set of numbers. 
#include <iostream>
#include<climits>
using namespace std;
int main() 
{
  int n,x ;
  cin >> n;
  int min =   INT_MAX;
  int max =   INT_MIN;
  for(int i=1; i<=n; i++)
  {
    cin >> x;
    if(x>max)
    {
      max = x;
    }
    if(x<min)
    {
      min = x;
    }
  }
  cout << "THE MAX : " << max << "  &&  " << "THE MIN : " << min << "\n";
  return 0;
}