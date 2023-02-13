#include<iostream>
using namespace std;

template<typename T>

void bubble_sort(T* a,int n)
{
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}
int main(){
    int a[]={83,7,0,73,2,64,4};
    bubble_sort(a,7);
    for(int i=0;i<7;i++)
    cout<<a[i]<<" ";

    cout<<endl;

    float b[]={8.3,7.9,0.5,7.3,2.8,6.4,4.5};
    bubble_sort(b,7);
    for(int i=0;i<7;i++)
    cout<<b[i]<<" ";
    return 0;
}