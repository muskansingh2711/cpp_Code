// polymorphism in c++
//polymorphism is the ability of a message to be displayed in more than one form.
// In C++, polymorphism is mainly divided into two types: compile-time polymorphism and run-time polymorphism.
// Compile-time polymorphism is achieved through function overloading and operator overloading.
// Run-time polymorphism is achieved through inheritance and virtual functions.

#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
    virtual void print(string s){
        cout<<"Base class: "<<s<<endl;
    }
};
class Student : public Person{
    public:
    void print(string s){
        cout<<"Sub class: "<<s<<endl;
    }
};

int main(){
    Person*p1 = new Person();
    Person*p2 = new Student();
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    p2->print(s1);
    p1->print(s2);
}