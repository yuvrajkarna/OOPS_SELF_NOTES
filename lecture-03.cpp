//this is how we can create constructor
#include<iostream>
using namespace std;
class hero
{
    private:
    int age;//initializing the member variables

    public:
    // creating a constructor
    /*
    Rules to create constructor:
        1. Constructor name should be same as class name
        2. No return type
    */
    hero(int x){
        this->age=x;
    }
    //member functions
    void getData(){
        cout<<"My hero age is:"<<age<<endl;
    }
};
int main(){

    hero h1(23),h2(34);//creating objects of hero class
    h1.getData();
    h2.getData();
    return 0;
}