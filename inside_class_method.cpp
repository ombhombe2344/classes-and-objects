//Name - Om Bhombe
//PRN - 23070123039
//Aim - to use the class inside the method and printing it .

#include<iostream>
using namespace std;

class Student{
    public:
    void myMethod()
    {
        cout << "I am studying in 2nd year.";
    }
};
int main(){

    Student s1;
    s1.myMethod();

    return 0;
}

/*
OUTPUT
I am studying in 2nd year.

*/
