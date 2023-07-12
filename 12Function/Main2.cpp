#include <iostream>
using namespace std;

void addition(int, int);     // prototype of function...
void substraction(int, int); // prototype of function...
void multi(int, int );        // prototype of function...
void division(int, int);     // prototype of function...

/*if want to write method after main method
then must need to creat a prototype*/

int main()
{

    addition(10, 20);
    substraction(20, 10);
    multi(10, 20);
    division(20, 10);

    cout << "All function have called." <<endl;

    return 0;
}

void addition(int x, int y)
{
    int sum = x + y;
    cout << "Sum for addtion is : " << sum << endl;
}

void substraction(int x, int y)
{
    int sum = x - y;
    cout << "Sum for substraction is : " << sum << endl;
}

void multi(int x, int y)
{
    int sum = x * y;
    cout << "Sum for multiplicaton is : " << sum << endl;
}

void division(int x, int y)
{
    int sum = x / y;
    cout << "Sum for division is : " << sum << endl;
}