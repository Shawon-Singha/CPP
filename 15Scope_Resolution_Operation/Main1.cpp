#include <iostream>
using namespace std;

int x = 20;

int main()
{
    int x = 10;
    cout << "Inside the main function : " << x << endl;

    /*for printing global value but available local value ,then use  scope resolution ....

    Socpe resolution sign is   ::   */

    cout << ::x << endl; // use scope resolution

    // :: x = 30; //change global variable value...
    // cout << :: x <<endl; //use scope resolution

    return 0;
}