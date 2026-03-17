// 2. Consuming a natural number n and a symbol and producing a list 
// with n occurrences of the symbol.
#include<iostream>
using namespace std;
int main(){
  cout << "Enter the number :\n";
  int n;
  cin >>n;
  cout << "Enter symbol :\n";
  char symbol;
  cin >> symbol;
  for(int i=1;i<=n;i++)
  {
    cout <<symbol ;
  }
  
  
  return 0;
}
