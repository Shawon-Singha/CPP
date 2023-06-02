// series of 1^2 * 2^2 * 3^3 * ......... * n^2 = ?

#include<iostream>
using namespace std;

int main(){
        unsigned int n, result = 1;

        cout << "Enter the value of n : ";
        cin >> n;

        for ( int i = 1;i<=n;i++){
            result = result * i*i;
        }

        cout << "Value is : " << result << endl;

        return 0;

}