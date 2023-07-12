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
};

int main(){
    Student shawon,anik;

    shawon.id = 5290;
    shawon.gpa = 3.76;

    shawon.display();

    anik.id = 4460;
    anik.gpa = 3.78;

    anik.display();

    return 0;

}