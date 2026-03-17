// 5. Reading two integers x and y, then computing the sum of squares of 
// integers from x to y.
#include<iostream>
using namespace std;
int main(){
  int x,y, sum=0 ,temp;
  cout << "Enter The tow Number :\n";
  cin >> x >> y;
  if(x>y){
  temp=x;
  x=y;
  temp=y;
  }
  
  for(int i=x;i<=y;i++)
  {
    sum=sum+(i*i);
  }
  cout << "The result = " << sum << "\n";
  
  return 0;
}
