// inheritence in c++
// Inheritance is a way to form new classes using classes that have already been defined.
// The new class is called derived class and the class from which it is derived is called base class.

#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
    string name;
    int age;
    void print(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
class Student : public Person{
    public:
    int rollno;
    void print(){
        cout<<"Roll no: "<<rollno<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
int main(){
    Person p1;
    Student s1;
    p1.name = "Muskan";
    p1.age = 20;
    s1.name = "Mohit";
    s1.age = 21;
    s1.rollno = 356;
    p1.print();
    s1.print();
    return 0;
}