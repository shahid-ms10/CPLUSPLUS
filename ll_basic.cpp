#include <iostream>

using namespace std;

class node{
    public:
    int data;
    node *next;
    node(int data){
        this->data=data;
        next = NULL;
    }
};

int main(){
    node n1(10);
    node *head=&n1;
    cout<<n1.data<<endl;
    node n2(20);
    n1.next=&n2;
    cout<<n1.next<<endl;
    cout<<n2.data<<endl;
    cout<<head->data<<endl;
    cout<<head->next<<endl;
    node *n3 = new node(30);
    node *n4 = new node(40);
    n2.next=n3;
    n3->next=n4;
    cout<<n3->next;
}