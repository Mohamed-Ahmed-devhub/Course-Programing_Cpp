#include <iostream>
using namespace std;
char courseGrad(int score)
{
  switch (score / 10)
  {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
    return 'F';
  case 6:
    return 'D';
  case 7:
    return 'C';
  case 8:
    return 'B';
  case 9:
  case 10:
    return 'A';
  default:
    return 'I';
  }
}
int main()
{
  int s1, s2, s3, s4, s5;
  cout << "Enter 5 scores: ";
  cin >> s1 >>s2 >> s3 >> s4 >> s5 ;
  cout <<"Grade 1: "<< courseGrad(s1) << endl;
  cout <<"Grade 2: "<< courseGrad(s2) << endl;
  cout <<"Grade 3: "<< courseGrad(s3) << endl;
  cout <<"Grade 4: "<< courseGrad(s4) << endl;
  cout <<"Grade 5: "<< courseGrad(s5) << endl;
  return 0;
}