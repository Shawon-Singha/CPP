#include<iostream>
using namespace std;

int addition(int a,int b){
    int sum =a + b;
    return sum;
}

int main(){

   int result = addition(10,20);

    // cout << "Sum is : " << addition(10,20) <<endl; //both are same....
    cout << "Sum is : " << result <<endl;
    return 0;
}