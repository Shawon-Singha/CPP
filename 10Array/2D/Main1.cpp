#include<iostream>
using namespace std;

int main(){
    int value[2][3];

    cout << "Enter your desire value : " << endl;

    for(int i = 0;i<2;i++){
        for(int j = 0;j<3;j++){
            cin >> value[i][j];
        }
    }

    cout << endl;

    for(int i = 0;i<2;i++){
        for(int j = 0;j<3;j++){
            cout << value[i][j] <<" ";
        }
        cout << endl;
    }

    return 0;


}