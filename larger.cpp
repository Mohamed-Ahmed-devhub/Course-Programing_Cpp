/*
"Write a function called larger that takes two double parameters and returns the larger of the two numbers."
*/
// #include <iostream>
// using namespace std;
// double larger(double num1, double num2);
// int main() 
// {
//     double a, b;
//     cin >> a >> b;
//     cout << larger(a, b) << endl;
//     // cout << larger(5, 10) << endl;
//     // cout << larger(3.5 , 2.1) << endl;
//     return 0;
// }
// double larger (double x , double y)
// {
//     return (x >= y) ? x : y;
// }

#include <iostream>
using namespace std;
double larger(double x , double y)
{
    return (x >= y) ? x : y;
}
int main()
{
    double num1, num2;
    cin >> num1 >> num2;
    cout << larger(num1, num2) << endl;
return 0;
}
    

