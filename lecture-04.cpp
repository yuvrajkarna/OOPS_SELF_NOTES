//This is the concept of non parametrized constructor
#include<iostream>
#include<string>
using namespace std;

class Person
{
    private:
    string name;
    int age ;
    float height;

    public:
    /*
    Notes:
        If we remove default contructor or non parametrized constructor then compiler
        will automatically create one default constructor and assign some garbage value
        and allocate memory to member variables.
    */
    Person(){
        // default constructor (When we don't pass any values defailt constructor is called)
        name="null";
        age=0;
        height=0.0;
    }
    void getData(){
        cout<<"Name is "<<name<<endl;
        cout<<"Age is "<<age<<endl;
        cout<<"Height is "<<height<<endl;
    }
};
int main(){
    Person P;
    P.getData();
    return 0;
}