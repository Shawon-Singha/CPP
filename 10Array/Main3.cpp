#include<iostream>
using namespace std;

int main(){
    int n,sum = 0;
    cout << "Enter number of student: ";
    cin >> n;

    int mark[n];
    for(int i = 0;i<n;i++){
    cout <<"Student's mark " << i+1 <<":";
       cin >>  mark[i];
       sum = sum + mark[i];
    }


    cout <<"Total sum : " << sum << endl;

    float average = (float)sum/n;
    cout << "Average" << average <<endl;

    int max = mark[0];
    int min = mark[0];

    for(int i =1 ;i<n;i++){
        if(max < mark[i]){
            max = mark[i];
        }

        if(min > mark[i]){
            min = mark[i];
        }
    }


    cout << "Maxmimum mark is : "<<max << endl
         <<"Minimum mark is : " << min << endl;



    return 0;

}