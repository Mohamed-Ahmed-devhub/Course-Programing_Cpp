// 1. Repeat the previous problem but make the program ask the user if
// he/she wants to make another calculation, if he/she enters ‘y’ the
// program read another two numbers and an operation, else the
// program ends.
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  double num1, num2;
  char op, rep;
  do
  {
    cout << "enter the tow number :\n";
    cin >> num1;
    cin >> num2;
    cout << "Enter the operation (+ , * , - , /):\n";
    cin >> op;
    switch (op)
    {
      
    case '+':
      cout << num1 + num2 << "\n";
      break;
    case '-':
      cout << num1 / num2 << "\n";
      break;
    case '/':
      if (num2 != 0)
        cout << num1 / num2 << "\n";
      else
        cout << "Error: divison by zero\n";

      break;
    case '*':
      cout << num1 * num2 << "\n";
      break;

    default:
      cout << "invalid operator\n";
    }
    cout << "Do you want to make another calculation ? (y/n)\n";
    cin >> rep;
  } while (rep == 'y');

  return 0;
}
