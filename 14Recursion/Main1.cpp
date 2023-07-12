//Pass by value....

#include<iostream>
using namespace std;

void display(int num) //formal parameter......
{
    num = 20;

}

int main(){
    
    int x = 10;
    cout << "Before calling the function : " << x << endl;

    display(x); //actual parameter......
    cout << "After caliing the function : " << x << endl; 


    return 0;
}