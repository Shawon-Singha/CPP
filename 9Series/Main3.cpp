//sum of 1 - 2 + 3 -4 + 5 - 6 + ............

#include<iostream>
using namespace std;

int main(){
    int n, even = 0,odd = 0;

    cout << "Enter the value of n : " ;
    cin >> n;

    for(int i = 1;i<=n;i++){
        if(i%2 == 0){
           even = even + i;
        }

        else{
            odd = odd + i;
        }
    }

    cout << "Sum of those value : " << odd - even << endl;

    return 0;
}