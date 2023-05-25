#include<iostream>

int main(){
    double f,c;

    std :: cout << "Enter fehrenheit: ";
    std :: cin >> f;
    
    c = (f-32) *5 /9;

    std :: cout << "Celsius is : " << c ;
}