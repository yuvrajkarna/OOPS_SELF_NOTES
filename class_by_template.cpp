#include<iostream>
using namespace std;
template <typename T>
class student{
    public:
    string names;
    T rollno;
    student(string name,T roll){
        names=name;
        rollno=roll;
    }
    void display(){
        cout<<names<<" "<<rollno<<endl;;
    }
};
int main(){
    student<int> s1("Yuvraj",21);
    s1.display();
    student<string> s2("Yuvraj","21a91a05a6");
    s2.display();
    return 0;
}