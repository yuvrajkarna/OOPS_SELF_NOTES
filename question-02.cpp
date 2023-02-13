/*
question-02:
    Write a program in which cuboid class inherit rectangle class and
    calculate area and volume.
*/
#include<iostream>
using namespace std;
class rectangle
{
    public:
    int length;
    int breadth;

    void area(){
        cout<<"Area of rectangle is "<<length*breadth<<endl;
    }

    void show(){
        cout<<"length is "<<length<<endl<<"breadth is "<<breadth<<endl;
    }
};

class cuboid: public rectangle {
    public:
    int height;

    void volume(){
        cout<<"Volume of cuboid is "<<length*breadth *height<<endl;
    }

    void display(){
        cout<<"Height is "<<height<<endl;
    }
};

int main(){
    cuboid c;
    // we can assign value by creating constructor as well
    c.length=10,c.breadth=20,c.height=40;
    
    c.show();
    c.display();

    c.area();
    c.volume();
    return 0;
}