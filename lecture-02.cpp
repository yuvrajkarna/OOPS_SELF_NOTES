#include<iostream>
#include<string>
using namespace std;
/*
NOTE:
    1. The member variables are actually storing the data will get seperate/fresh 
    memory space each time we create a new object
    2. But in case of member function they will be share by all the objects

*/
class house
{
    private:
    //member variable 
    int length = 0,breadth = 0 ;

    public:
    //member function
    void setData(int x,int y){
        length=x;
        breadth=y;
    }
    void area(){
        cout<<"Area of House : "<<length*breadth<<endl;;
    }
};

int main(){

    house h1,h2;
    //creating 2 objects at a time
    /*it will allocate two different block of memory for each object for 
    member variables and functions
    */
    h1.setData(30,40);
    h1.area();
    h2.setData(50,40);
    h2.area();
    return 0;
}