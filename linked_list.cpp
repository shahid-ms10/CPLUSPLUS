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
    node *tail=NULL;
    while(data!=-1){
        node *newnode= new node(data);
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

int count_iterative(node *head){
    int count=0;
    node *temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

int count_recursion(node *head){
    node *temp=head;
    if(temp==NULL){
        return 0;
    }
    return 1+count_recursion(temp->next);
}

int middle1(node *head){
    node *temp1=head;
    node *temp2=head;
    while(temp2!=NULL && temp2->next!=NULL){
        temp1=temp1->next;
        temp2=(temp2->next)->next;
    }
    return temp1->data;
}

int middle2(node *head){
    int l=count_iterative(head);
    node *temp=head;
    int k=0;
    while(k<(l/2)){
        k++;
        temp=temp->next;
    }
    return temp->data;
}

node* insertnode(node *head,int i,int data){
    node *newnode=new node(data);
    int count=0;
    node* temp =head;
    if(i==0){
        newnode->next=head;
        head=newnode;
        return head;
    }
    while(temp!=NULL && count<i-1){
        temp=temp->next;
        count++;
    }
    if(temp!=NULL){
        node* a=temp->next;
        temp->next=newnode;
        newnode->next=a;
    }
    return head;
}

int main(){
    node *head=getnode();
    print(head);
    cout<<endl;
    //int i, data;
    //cin>>i>>data;
    //head= insertnode(head,i,data);
    //print(head);
    cout<<count_iterative(head)<<endl;
    cout<<count_recursion(head)<<endl;
    cout<<middle1(head)<<endl;
    cout<<middle2(head);
}