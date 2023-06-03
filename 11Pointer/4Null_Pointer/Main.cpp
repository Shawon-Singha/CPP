#include<iostream>
using namespace std;

int main(){
    int c = 20;
    int *tPtr = &c;

      cout << tPtr << endl;

    tPtr = 0; //settin the NULL...

    if(tPtr == NULL){
        cout << "Yes,it is a NULL pointer."<<endl;
    }

    else{
        cout << "It is not." <<endl;
    }

    return 0;
}