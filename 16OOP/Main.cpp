#include<iostream>
using namespace std;

class Student{
  public :

  int id;
  double gpa;
};

int main(){
//  Student shawon;
//  Student anik;

 Student shawon,anik; //both are correct.....

 shawon.id = 5290;
 shawon.gpa = 3.76;

 cout << "Id is : " << shawon.id << endl
      << "GPA is : " << shawon.gpa << endl;

anik.id = 4490;
anik.gpa = 3.96;

cout << "Id is : " << anik.id << endl
     <<"GPA is : " << anik.gpa <<endl;


   return 0;
}