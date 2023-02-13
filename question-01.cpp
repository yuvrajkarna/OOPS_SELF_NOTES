/*
Question-01:
    Write a Program,take Phone details as input and store them in object
    and use constructor.
    Phone details:
    1.Name
    2.RAM
    3.Processor
    4.Battery
*/

#include<iostream>
#include<string>
using namespace std;

class Phone_details
{
    private:
    string name,processor,battery;
    int ram;

    public:
    //constructor overloading
    Phone_details(string name_a="Null",int ram_a=0,string processor_a="unknown",string battery_a="Null"){
        name=name_a;
        ram=ram_a;
        processor=processor_a;
        battery=battery_a;
    }
    Phone_details(Phone_details &ph1){ // copy constructor
        name=ph1.name;
        ram=ph1.ram;
        processor=ph1.processor;
        battery=ph1.battery;
    }
    void getData();
    
};
void Phone_details::getData()
{
    cout<<"Phone name is "<<name<<endl;
    cout<<"Ram is "<<ram<<" GB"<<endl;
    cout<<"Processor is "<<processor<<endl;
    cout<<"Battery life is "<<battery<<endl;

}

int main(){
    Phone_details ph0;//accessing non parametrized constructor
    Phone_details ph1("Samsung",8,"Snapdragon","8hrs"),ph2(ph1);
    ph0.getData();
    ph1.getData();
    ph2.getData();
    return 0;
}