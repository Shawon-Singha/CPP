#include<iostream>
using namespace std;

int main(){
    int mark;

    cout << "Enter the mark :";
    cin >> mark;

    if(mark> 100 || mark < 0) cout << "Invaild.";

    else if (mark >= 80) cout<< "Got A+";

    else if (mark >= 75) cout<< "Got A";

    else if (mark >= 60) cout<< "Got A-";

    else if (mark >= 65) cout<< "Got B";

    else if (mark >= 60) cout<< "Got C";

    else if (mark >= 55) cout<< "Got D";

    else if (mark >= 50) cout<< "Got E";

    else if (mark >= 45) cout<< "Got F";

    else cout << "Fail";
}