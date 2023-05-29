#include<iostream>
using namespace std;

int main(){
    int sum = 0 ,n;

    cout << "Enter the value : ";

    cin >> n;

    for(int i = 0;i<=n;i++)
    {
        sum = sum + i * i;
    }

    cout << "Some of square of those value is : "<< sum << endl;

    return 0;
}