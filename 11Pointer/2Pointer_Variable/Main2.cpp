#include<iostream>
using namespace std;

int main(){
    float y = 10.4;
    float *m;
        m = &y;

        cout << m << endl;
        cout << *m << endl;

        return 0;
}