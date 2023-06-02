#include<iostream>
using namespace std;

int main(){
    /*
    array declaration:
     data_Type array_name[size]
    */

   int mark[5];

   mark[0] = 10;
   mark[1] = 20;
   mark[2] = 30;
   mark[3] = 40;
   mark[4] = 50;

   cout << mark[0] << endl;
   cout << mark[1] << endl;
   cout << mark[2] << endl;
   cout << mark[3] << endl;
   cout << mark[4] << endl;

   cout <<endl;


   //another declaration;

   int marks[5] = {15,25,35,45,55};


   cout << marks[0] << endl
        << marks[1] << endl
        << marks[2] << endl
        << marks[3] << endl
        << marks[4] << endl;

   return 0;
}