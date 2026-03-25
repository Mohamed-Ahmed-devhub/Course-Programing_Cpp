// Computing the factorial of any given integer.
#include <iostream>
using namespace std;
int main() 
{
  int x , fac=1;
  cin >> x;
  for(int i=1;i<=x;i++)
  {
    fac = fac * i;
    cout << fac <<endl;
  }
  return 0;
}