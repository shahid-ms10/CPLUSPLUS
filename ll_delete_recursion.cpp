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

node* delete_recursively(node *head, int i){
    if(head==NULL){
        return NULL;
    }
    if(i==0){
        head=head->next;
        return head;
    }
    if(i==1){
        head->next= head->next->next;
        return head;
    }
    delete_recursively(head->next,i-1);
    return head;
}

int main(){
    node *head=getnode();
    print(head);
    cout<<endl;
    int i;
    cin>>i;
    head= delete_recursively(head,i);
    print(head);
}