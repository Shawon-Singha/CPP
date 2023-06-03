#include <iostream>
using namespace std;

int main()
{
    char m;
    /*
    we do not use any value that's why it print empty.
    */

    // but

    cout << &m << endl;

    char n = 'a'; // we put value ,that why we see the address

    cout << (void *)&n << endl; // special behaviour

    int arry[100];
    // array hold address itself...that why  no need to address sign
    cout << arry << endl;

    // but if we use ,there will be no error.
    cout << &arry << endl;

    return 0;
}