//This is friend function exampl with property
#include<iostream>
using namespace std;

class Complex{
    private:
    int a,b;

    public:
    Complex(int x=0,int y=0){
        a=x;
        b=y;
    }
    friend Complex sumOfc1Andc2(Complex c1,Complex c2);
    // This Functions can use private data of "Complex class" but 
    // it is not the member of this class
    void printData(){
        cout<<"Your number is : "<<a<<" + "<<b<<"i"<<endl;
    }

};

Complex sumOfc1Andc2( Complex c1,Complex c2){
    return ( (c1.a+c2.a) , (c1.b+c2.b) );
}   

int main(){
    Complex c1(4,5),c2(7,8),sum;   
    c1.printData(); 
    c1.printData();
    sum=sumOfc1Andc2(c1,c2);
    sum.printData();
    return 0;
}
/*
Properties of Friend is function:
    1.Not in the scope of class.
    2.Since it is not in the scope of the class,it cannot be called from the object
    of the class.i.e c1.sumOfsumOfc1Andc2() is invalid.

    3.Can be invoked without the help of any object.
    4.Usually contains the objects as arguments.
    5.Can be declared inside public or private section of the class.
    6.It cannot access the members directly by their names and need object_name.member_name
    to access any member.
*/
