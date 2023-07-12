#include<iostream>
using namespace std;

void addition(int x,int y){
    int sum = x+y;
    cout <<"Sum = " << sum << endl ;
}

int main(){
    
    addition(10,20); //function calling...
    addition(20,20);

    return 0;

}