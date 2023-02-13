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
        cout<<"Parametrized constructor of base class"<<b<<"\n";
    }
};

class derived: public base
{
    public:
    derived(){
        cout<<"Default constructor of derived class"<<"\n";
    }
    
    derived(int c){
        cout<<"Parametrized constructor of derived class "<<c<<"\n";
    }
    
};

int main(){
    /*
NOTE:
    1st case:(when "derived d1" is executed)
        1st Default Constructor of base class, then Default constructor
        of derived class is called.
    2nd case:(when "derived d2(9)" is executed)
        2nd Parametrized Constructor of base class is not called when
        Parametrized constructor is present in derived class.
        (If Parametrized constructor is not present in derived class also 
        it can't access base class Parametrized constructor)
*/
    derived d1;
    cout<<endl;
    derived d2(9);
    
    return 0;
}