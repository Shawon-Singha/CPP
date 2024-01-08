//creat a constructor

#include<iostream>
using namespace std;

class Student{
    public: 
    int id;
    double gpa;

    Student(int x, double y)  //parametrized constructor...
    {
        id = x;
        gpa = y;
    }

    void display(){
        cout << " Id is : " << id << endl
             << "GPA is : " << gpa << endl;
    }

    Student() //default constructor
    {
        cout << "It is a default constructor." << endl;
    }
};

int main(){

    Student deFault; // for default constructor

    Student shawon(5290,3.76);
    shawon.display();
}