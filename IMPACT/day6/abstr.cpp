// Abstraction in c++

// Abstraction is the concept of hiding the complex implementation details and showing only the essential features of the object.
// it is done by using pure virtual functions and abstract classes.
// pure virtual function is a virtual function that has no definition in the base class and is declared by assigning 0 to it.

#include<bits/stdc++.h> 
using namespace std;
class Person{
    public:
    virtual void print(string s)=0;
};
class Student : public Person{
    public:
    void print(string s) override{
        cout<<"Sub class: "<<s<<endl;
    }
};

int main(){
    Student obj;
    string s1;
    getline(cin,s1);
    obj.print(s1);
    
}