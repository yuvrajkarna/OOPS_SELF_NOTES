#include<iostream>
#include<string>

using namespace std;

class overload{
    private:
    int weight;
    public:
    overload(int weight=0){
        this->weight=weight;
    }
    overload operator++(int){
        weight++;
    }
    overload operator+(overload W){
        overload temp;
        temp.weight=weight+W.weight;
    }
    void printdata(){
        cout<<"Data is: "<<weight<<endl;;
    }
};
int main(){
    overload W(34),W2(33);
    overload W3;
    W3=W+W2;
    W3.printdata();
    
    W3++;
    W3.printdata();
    return 0;
}