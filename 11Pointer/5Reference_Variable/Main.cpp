#include <iostream>
using namespace std;

int main()
{
    int m = 30;
    int &n = m; // Reference variable...

    // here, m and n both are same...

    cout << m << endl;
    cout << n << endl;

    m++;
    cout << m << endl;
    cout << n << endl;

    n++;
    cout << m << endl;
    cout << n << endl;

    // that's means when we increase one's value,other will increase automatic...

    return 0;
}