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

node* insert_recursively(node *head, int i,int data){
    node *newnode=new node(data);
    node *temp=head;
    if(i==0){
        newnode->next=head;
        head=newnode;
        return head;
    }
    if(i==1){
        newnode->next= temp->next;
        head->next=newnode;
        return head;
    }
    insert_recursively(temp->next,i-1,data);
    return head;
}

int main(){
    node *head=getnode();
    print(head);
    cout<<endl;
    int i, data;
    cin>>i>>data;
    head= insert_recursively(head,i,data);
    print(head);
}