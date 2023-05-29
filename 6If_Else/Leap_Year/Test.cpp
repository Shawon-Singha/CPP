/*
if value divide by 4 and not divide by 100 then leaf year
else if value divide by 400 then leap year.
*/

#include <iostream>
using namespace std;

int main()
{
    int year;

    cout << "Enter the year :";
    cin >> year;

    if (year % 4 == 0 && year % 100 != 0)
    {
        cout << "This is a leap year.";
    }

    else if (year % 400==0)
    {
        cout << "This is a leap year.";
    }

    else
    {
        cout << "This is not a leap year.";
    }

    return 0;
}