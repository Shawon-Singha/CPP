#include<iostream>
using namespace std;


 void addition(int ,int); //prototype of function...

 /*if want to write function after main function
 then must need to creat a prototype function */


int main(){

addition(10,20);

}

void addition(int x,int y){
    int sum = x + y;
    cout << "Sum is : " << sum << endl;

    
}