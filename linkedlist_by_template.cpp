#include<iostream>
using namespace std;
//template <typename T>
class Node{
    public:
        int data;
        Node *next;
        Node(int val){
            data=val;
            next=NULL;
        }
};
class LinkedList{
    public:
        Node *head,*temp;
        void addatfront(int val){
            Node *NN=new Node(val);//Creation of new node
            if(head==NULL){
                head=NN;
            }
            else{
                NN->next=head;
                head=NN;
            }
        }
        void addatend(int val){
            Node *NN=new Node(val);
            if(head==NULL){
                head=NN;
            }
            else{
                temp=head;
                while(temp->next){
                    temp=temp->next;
                }
                temp->next=NN;
                head=temp;
            }
        }
        void display(){
            temp=head;
            if(temp==NULL){
                cout<<"NO NODES\n";
                return;
            }
            while(temp){
                cout<<temp->data<<" ";
                temp=temp->next;
            }
            cout<<endl;
        }
};
int main(){
    LinkedList L;
    //cout<<L.head;
    int ch;
    
    while(1){
        
        cout<<"1.add at front 2.add at end 3.display 4.exit\n";
        cin>>ch;
        if(ch==1){
            int val;
            cin>>val;
            L.addatfront(val);
        }
        else if(ch==2){
            int val;
            cin>>val;
            L.addatend(val);
        }
        else if(ch==3){
            L.display();
        }
        else{
            break;
        }
    }
    return 0;
}