// 19. Reading two integers and printing all odd integers between them. 
#include <iostream>
using namespace std;
int main() 
{
  int x,y;
  cin >> x >> y;
  for(int i=1; i<=y; i++)
  {
    if(i%2!=0)
    {
      cout << i << '\n';
    }
  }
  return 0;
}