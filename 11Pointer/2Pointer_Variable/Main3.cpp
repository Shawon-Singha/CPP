#include<iostream>
using namespace std;

int main(){
    int a = 10; // variable declare
    int *p = &a; // address declare that contains value of a

    int **q = &p; // address contain that contain address of *p;
    
    int ***r = &q;
    cout << p << endl;
    cout << q << endl;
    cout << r << endl;

    return 0 ;
}