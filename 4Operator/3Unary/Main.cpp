/* 
'+' unary plus
'-' inary minus
'++; increment
'--' decrement
*/

#include<iostream>
using namespace std;

int main(){
  int x = 4;

  int result = +x;

  cout << result << endl;

  int y = 6;
  int result1 = -y;

  cout << result1 << endl;


  int x1 = x++; //increment 1
  cout << x << endl;

  return 0;
}