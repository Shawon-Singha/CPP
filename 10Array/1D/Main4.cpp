#include<iostream>
using namespace std;

int main(){
    int arr[20]; // size declare.

    int n;
    cin >> n ;
    
//user input

    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    

    //output

    for(int i = 0;i<n;i++){
        cout <<  arr[i] << " ";
    }
    cout << endl;


    
    for(int i = 0;i<sizeof(arr);i++){
        cout <<  arr[i] << " ";
    }

    return 0;



}