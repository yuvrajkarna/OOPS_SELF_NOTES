#include<iostream>
#include<string>
using namespace std;

//class creation
class house 
{
    //member variables
    private://accesss specifier
    int length = 0, breadth = 0;

    //member functions
    public://access specifier
     void setData(int x,int y){
        length=x;
        breadth=y;
     }

     void area(){
        cout<<"Area of House :"<<length * breadth;
     }

};

int main(){

    house rama;
    rama.setData(20,30);
    rama.area(); 
    return 0;
}