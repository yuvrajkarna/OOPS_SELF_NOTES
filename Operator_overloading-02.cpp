// This is an example of unary operator overloading

#include<iostream>
using namespace std;

class Person{
    private:
    int weight;

    public:
    Person(int x=0){
        weight=x;
    }
    void operator++(){
        ++weight;//Pre-incrementor
    }
    //This is the difference between pre-incrementor and post-incrementor
    //In post incrementor, We just need to pass an int as an argument 
    //(it will help compiler to understand which is pre/post -incrementor)
    void operator++(int){
        weight++;//Post-incrementor
    }
    void printData(){
        cout<<"After increment : " <<weight<<endl;
    }
};

int main(){
    Person sonu(56);
    Person sita(32);
    ++sita;
    sita.printData();
    sonu++;
    sonu.printData();
    sonu++;
    sonu.printData();
    
    return 0;
}