//creat a constructor

#include<iostream>
using namespace std;

class Student{
    public: 
    int id;
    double gpa;

    Student(int x, double y){
        id = x;
        gpa = y;
    }

    void display(){
        cout << " Id is : " << id << endl
             << "GPA is : " << gpa << endl;
    }
};

int main(){
    Student shawon(5290,3.76);
    shawon.display();
}