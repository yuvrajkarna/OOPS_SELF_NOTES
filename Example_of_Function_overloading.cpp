//This is an example of function overloading using oops concept
#include<iostream>
using namespace std;

class example
{   
    public:
    void add(int a,int b){
        cout<<"Sum is "<<a+b<<endl;
    }
    void add(int a,int b,int c){
        cout<<"Sum is "<<a+b+c<<endl;
    }
};
int main(){
    example a,b;
    a.add(3,7);
    b.add(2,87,54);
    return 0;
}