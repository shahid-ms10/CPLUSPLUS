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

void print(node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
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

void reverse_print(node*head){
    if(head==NULL){
        return;
    }
    reverse_print(head->next);
    cout<<head->data<<" ";
}

int main(){
    node* head1=getnode();
    print(head1);
    cout<<endl;
    reverse_print(head1);
}