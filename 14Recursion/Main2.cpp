//pass by reference.....

#include<iostream>
using namespace std;

void display(int *num){
    *num = 20;
}

int main(){
    int x = 10;
    cout <<"Before calling the function : " << x <<endl;
    

    display(&x);
    cout << "After calling the function : " << x << endl;

    return 0;

}