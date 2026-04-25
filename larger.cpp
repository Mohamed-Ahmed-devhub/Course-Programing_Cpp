/*
larger + compareThree  
المفهوم الأساسي:
• Function Prototype → يجي قبل main وبينتهي بـ ;
• Value-returning function → تتاستخدم في expression أو cout أو assignment
• الـ return statement → برجع قيمة وبتوقف الدالة فوراً
*/
#include <iostream>
using namespace std;
double larger(double num1, double num2);
double compareThree(double num1, double num2, double num3);
int main() {
    double one, two;
    cout << "The larger of 5 and 10 is " << larger(5, 10) << endl;
    cout << "Enter two numbers: ";
    cin >> one >> two;
    cout << "The larger number is: " << larger(one, two) << endl;
    cout << "Largest of 43.48, 34.00, 12.65 = " << compareThree(43.48, 34.00, 12.65) << endl;
    return 0;
}
double larger(double num1, double num2) {
    if (num1 >= num2)
        return num1;
    else
        return num2;
}
double compareThree(double num1, double num2, double num3) {
    return larger(num1, larger(num2, num3));
}