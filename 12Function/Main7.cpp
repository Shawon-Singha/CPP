#include<iostream>
using namespace std;

void display(int number[],int size){
   for(int i = 0;i<size;i++){
    cout << number[i] << " ";
   }
}

int main(){
    int num[5] = {1,2,3,4,5};

    display(num,5);

}