#include<iostream>
using namespace std;

int fact(int n){
     if(n == 1) return 1;

     else return n * fact(n-1); 
}

int main(){
    
    fact(4);

    cout << "Factorial of 4 is :" << fact(4) <<endl;
    
    return 0;
}