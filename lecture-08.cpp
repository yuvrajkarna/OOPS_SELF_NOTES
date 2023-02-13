//This is the fundamental concept of inheritance
#include<iostream>
using namespace std;
class rectangle
{
    public:
    int length;
    int breadth;

    void show(){
        cout<<"length is "<<length<<endl<<"breadth is "<<breadth<<endl;
    }
};

class cuboid: public rectangle {
    public:
    int height;

    void display(){
        cout<<"Height is "<<height<<endl;
        cout<<"length is "<<length<<endl<<"breadth is "<<breadth<<endl;
    }
};

int main(){
    cuboid c;
    c.length=10,c.breadth=20,c.height=40;
    //Here we can access length and breadth variable from cuboid class because the concept of inheritance
    c.show();
    //Here we can access member function of rectangle class from cuboid class due to concept of inheritance
    c.display();
    return 0;
}