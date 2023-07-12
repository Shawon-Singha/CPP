#include<iostream>
using namespace std;

class Student {
    public :

    int id;
    double gpa;

    void display(){
        cout << "Id is : " << id << endl
             << "GPA is : " << gpa <<endl;
    }

    void setValue(int x,double y){
        id = x;
        gpa = y;
    }
};

int main(){
    Student shawon,anik;
     shawon.setValue(5290,3.44);
    shawon.display();

    anik.setValue(4424,3.88);
    anik.display();

    return 0;

}