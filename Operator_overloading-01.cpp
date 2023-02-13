/*
Operator overloading:-
    When we make operators(+,-,/,*) work for user-defined types like objects and structures.
    This is known as operator overloading.
*/

#include<iostream>
#include<string>

using namespace std;

class sum
{
    private:
    int weight;

    public:
    sum(int x=0){
        weight=x;
    }
    /*
        NOTES:-
          1.Here data tye and which operator is using is to be maintained 
            carefully here sum is datatype and + is operator.
          2.while passing argument in overloading also we need to maintained
            return datatype.
    */
    // this  method is traditional way of adding two numbers
    sum addWeight( sum W2){
        sum temp;
        temp.weight=weight+W2.weight;
        
        return temp;
    }

    void PrintSum1(){
        cout<<"Total(by traditional method) = "<<weight <<endl;
    }
    sum operator+(sum person2){
        sum temp;
        temp.weight=weight+person2.weight;
        /*
            1. Here temp.weight is accessing weight object globally by the help of
               temp object and
            
            2.Weight refers to weight of person1 and we are giving 
            
            3.Weight of person2 as person2.weight
        
        */
        
    }

    void PrintSum(){
        cout<<"Sum is "<< weight <<endl;
    } 
};
    
int main(){
    //Normal way
    int a=34,b=32,c=0;
    c=a+b;

    cout<<"Total(by normal) = "<<c<<"\n";

    //traditional method
    sum person1(75);
    sum person2(24);

    sum total;

    // Calling  traditional method
    total=person1.addWeight(person2);
    total=person2.addWeight(person1);
    total.PrintSum1();


    //Operator overloading 
    sum person3(75);
    sum person4(25);

    sum total1;

    total1=person3+person4;
    // here person2 is passed in operator overloading as an argument
    total1.PrintSum();

    return 0;

}
 