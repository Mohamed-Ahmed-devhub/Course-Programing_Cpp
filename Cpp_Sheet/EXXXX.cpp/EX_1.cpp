
//  Repeat the previous problem but make the program ask the user if 
// he/she wants to make another calculation, if he/she enters ‘y’ the 
// program read another two numbers and an operation, else the program 
// ends.
#include <iostream>
using namespace std;
int main() 
{
  int a, b;
  char op;
  char c;
  do
  {
    cin >> a >> op >> b;
    if(op=='+')
    {
      cout << a + b << "\n";
    }
    else if(op=='-')
    {
      cout << a - b << "\n";
    }
    else if(op=='*')
    {
      cout << a * b << "\n";
    }
    cout << "Anather Calc ?\n";
    cin >> c ;
  } while (c=='y');

  
  return 0;
}