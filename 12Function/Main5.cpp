#include<iostream>
using namespace std;

void square(int n){
    int result = n*n;

    cout << "Result is : " <<result <<endl;
}

int main(){
  square(5);
  square(6);
  square(7);

  return 0;
}