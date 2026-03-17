// 6. Finding the maximum/minimum of a set of numbers
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    
  int n, num, maxNum, minNum;

cout << "How many numbers? ";
cin >> n;
cout << "Enter number 1: ";
cin >> num;
maxNum = num;
minNum = num;

for (int i = 2; i <= n; i++) {
    cout << "Enter number " << i << ": ";
    cin >> num;

    if (num > maxNum) maxNum = num;
    if (num < minNum) minNum = num;
}

cout << "Max: " << maxNum << " | Min: " << minNum;
  return 0;
}
