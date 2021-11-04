#include <iostream>

using namespace std;

class node{
    public:
    int data;
    node *next;
    node(int data){
        this->data=data;
        next=NULL;
    }
};

void print(node *head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

node* getnode(){
    int data;
    cin>>data;
    node *head=NULL;
    while(data!=-1){
        node *newnode= new node(data);
        if(head==NULL){
            head=newnode;
        }
        else{
            node* temp= head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=newnode;
        }
        cin>>data;
    }
    return head;
}

node* deletenode(node *head,int i){
    int count=0;
    node* temp =head;
    if(i==0){
        head=head->next;
        return head;
    }
    while(temp!=NULL && count<i-1){
        temp=temp->next;
        count++;
    }
    if(temp!=NULL){
        node* a=temp->next;
        node* b=a->next;
        temp->next=b;
    }
    return head;
}

int main(){
    node *head=getnode();
    print(head);
    cout<<endl;
    int i;
    cin>>i;
    head= deletenode(head,i);
    print(head);
}

