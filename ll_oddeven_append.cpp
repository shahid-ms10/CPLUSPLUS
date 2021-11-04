#include <iostream>

using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        next=NULL;
    }
};

node* getnode(){
    int data;
    cin>>data;
    node* head=NULL;
    node* tail=NULL;
    while(data!=-1){
        node* newnode=new node(data);
        if(head==NULL){
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=tail->next;
        }
        cin>>data;
    }
    return head;
}

void print(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

node* oddeven_append(node* head){
    node* temp=head;
    node* oddhead=NULL;
    node* oddtail=NULL;
    node* evenhead=NULL;
    node* eventail=NULL;
    while(temp!=NULL){
        if(temp->data % 2 == 0){
            node* newnode=new node(temp->data);
            if(evenhead==NULL){
                evenhead=newnode;
                eventail=newnode;
            }
            else{
                eventail->next=newnode;
                eventail=eventail->next;
            }
        }
        else{
            node* newnode=new node(temp->data);
            if(oddhead==NULL){
                oddhead=newnode;
                oddtail=newnode;
            }
            else{
                oddtail->next=newnode;
                oddtail=oddtail->next;
            }
        }
        temp=temp->next;
    }
    if(evenhead==NULL || oddhead == NULL){
        return head;
    }
    cout<<endl;
    eventail->next=NULL;
    oddtail->next=evenhead;
    return oddhead;   
}

int main(){
    node* head1=getnode();
    print(head1);
    cout<<endl;
    node* head2=oddeven_append(head1);
    print(head2);
}
