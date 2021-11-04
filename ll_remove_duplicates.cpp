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

node* remove_duplicates(node* head){
    node* temp1=head;
    node* temp2=head->next;
    if(temp1==NULL || temp1->next==NULL){
        return head;
    }
    while(temp2!=NULL){
        if(temp1->data==temp2->data){
            temp2=temp2->next;
        }
        else{
            temp1->next=temp2;
            temp1=temp2;
            temp2=temp2->next;
        }
    }
    temp1->next=temp2;
    return head;
}

int main(){
    node* head1=getnode();
    print(head1);
    cout<<endl;
    node*head2=remove_duplicates(head1);
    print(head2);
}