// Computing the sum of all integers from 1 to any given integer
#include<iostream>
using namespace std;
int main(){
  int num , sum=0;
  cout << "Enter The Number :\n";
  cin >> num;
  for(int i=1;i<=20;i++)
  {
    sum+=i;
  }
  cout << sum << "\n";
  return 0;
}
