#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){

    
    for(int i =1;i<=5;i++){
        int randonNumber = rand(); // for any number....
        // int randonNumber = rand() %5; //if want print bewteen 0 to 4 then mod with 5...
        // int randonNumber = rand() %5 +1; //if want print result bewteen 0 to 5 then mod plus 1...

        cout << "Random is : " << randonNumber<<endl;
    }
    return 0;
}