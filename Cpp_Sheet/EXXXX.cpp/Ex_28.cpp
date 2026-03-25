// /Printing the binary numbers from (0000)2  to (1111)2////
#include <iostream>
using namespace std;
int main() 
{
  
  for(int i=0; i<=1; i++)
  {
    for(int j=0; j<=1; j++)
    {
      for(int k=0; k<=1; k++)
      {
        for(int l=0; l<=1; l++)
        {
            cout << i << j << k << l << endl;
        }
      }
    }
  }
  return 0;
}