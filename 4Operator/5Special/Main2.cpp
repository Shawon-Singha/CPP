#include<iostream>
using namespace std;

int main(){

    int a ;
    float f;
    double d;
    char ch;
    char name[20];

    int c = sizeof(a);
    int e = sizeof(f);
    int g = sizeof(d);
    int h = sizeof(ch);
    int i = sizeof(name);

    cout << c << endl;
    cout << e << endl;
    cout << g << endl;
    cout << h << endl;
    cout << i << endl;



    return 0;
}