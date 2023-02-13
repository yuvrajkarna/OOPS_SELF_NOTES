//This is the concept of Parametrized constructor(difference between default constructor and non parametrized constructor)
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
    //this is a parametrized constructor
    Person(string name_a,int age_a,float height_a){
        name=name_a;
        age=age_a;
        height=height_a;
    }

    void getData(){
        cout<<"Name is "<<name<<endl;
        cout<<"Age is "<<age<<endl;
        cout<<"Height is "<<height<<endl;
    }
};
int main(){
    Person P1,P2("Yuvraj",20,5.9);
    //here P2 object is accessing parametrized constructor
    P1.getData();
    P2.getData();
    return 0;
}