//This is the concept of constructor overloading.

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
    Person(){
        // default constructor (When we don't pass any values default constructor is called)
        name="null";
        age=0;
        height=0.0f;
    }
    */
    //this is a parametrized constructor
    Person(string name_a="null",int age_a=0,float height_a=0.0){
        /*
        Notes:
            Now by assigning the default value to the arguments this parametrize constructor 
            is behaving like non parametrize or default constructor.
            #(Check the difference by executing lecture-06 and lecture-07)
        */
        name=name_a;
        age=age_a;
        height=height_a;
    }
    //this is copy constructor
    Person(Person &P2){
        //&P2 is passed so we are directly accessing the P2 object by reference
        name=P2.name;
        age=P2.age;
        height=P2.height;
    }

    void getData(){
        cout<<"Name is "<<name<<endl;
        cout<<"Age is "<<age<<endl;
        cout<<"Height is "<<height<<endl;
    }
};
int main(){
    Person P1,P2("Yuvraj",20,5.9),P3(P2);
    //here P3 object is created by a copy constructor of P2 object
    P1.getData();
    P2.getData();
    P3.getData();
    return 0;
}