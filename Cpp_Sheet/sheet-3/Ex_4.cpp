// 4. Reading two integers and printing all odd integers between them.
#include<iostream>
using namespace std;
int main(){
  int x,y,temp;
  cout << "Enter the to number:\n";
  cin >> x >> y;
  if(x>y)
{
  temp=x;
  x=y;
  y=temp;
}
  for(int i=x;i<=y;i++)
  {
    if(i%2!=0)
    {
      cout << i << "\n";
        
    }
  }
  
  return 0;
}
