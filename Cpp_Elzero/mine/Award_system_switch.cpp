#include <iostream>
using namespace std;
int main()
{
     int num;
     cout << " type the number\n ";
     cin >> num;

     switch (num)
     {
     case 100:
     case 150:
     case 200:
     case 300:
          cout << " congrats for the laptop\n";
          break;

     case 300:
     case 400:
          cout << " congrats for the iphone 13 pro max\n";
          break;
     default:
          cout << " congrats for the banana\n";

          break;
     }

     return 0;
}