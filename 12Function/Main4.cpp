#include<iostream>
using namespace std;

void display(int a  = 10,int b = 20){
   cout << a << " " << b << endl;
}

int main(){
    display(); // print default value..
    display(25); //initial value of a, b is conastant...
    display(30,40); // intial all value....

    return 0;
}