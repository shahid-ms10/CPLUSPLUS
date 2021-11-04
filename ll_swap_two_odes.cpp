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

node* swap(node* head,int i,int j){
    node* temp = head;
    node*p1=NULL;
    node*c1=head;
    node*p2=NULL;
    node*c2=head;
    int index=0;
    while(index<i){
        if(index==0){
            c1=c1->next;
            p1=temp;
        }
        else{
            p1=p1->next;
            c1=c1->next;
        }
        index++;
    }
    index=0;
    while(index<j){
        if(index==0){
            c2=c2->next;
            p2=temp;
        }
        else{
            p2=p2->next;
            c2=c2->next;
        }
        index++;
    }
    if(p1==NULL){
        p1=c2;
        p2->next=c1;
        node* temp1=c2->next;
        c2->next=c1->next;
        c1->next=temp1;
        head=p1;
        return head;
    }
    if(p2==NULL){
        p2=c1;
        p1->next=c2;
        node* temp1=c2->next;
        c2->next=c1->next;
        c1->next=temp1;
        head=p2;
        return head;
    }
    p1->next=c2;
    p2->next=c1;
    node* temp1=c2->next;
    c2->next=c1->next;
    c1->next=temp1;
    return head;
}

int main(){
    node* head1=getnode();
    print(head1);
    cout<<endl;
    int i,j;
    cin>>i>>j;
    cout<<endl;
    node* head2=swap(head1,i,j);
    print(head2);
}