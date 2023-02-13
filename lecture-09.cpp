// This is the key concept of inheritance and constructor(vvi)
#include<iostream>
using namespace std;

class base
{
    public:
    base(){
        cout<<"Default constructor of base class"<<"\n";
    }
    base(int b){
        cout<<"Parametrized constructor of base class"<<"\n";
    }
};

class derived: public base
{
    //empty
};
/*
NOTE:
    If we don't specify a constructor, then derived class will use 
    appropriate constructor from base class(Applicable only to 
    Default constructor)
*/

int main(){
    derived d1;

    // derived d2(9);
    /*
    NOTE:
    If we try to execute above object it will throw error cause
     derived class only use default constructor if not any other constructor is specified 
    */
    return 0;
}