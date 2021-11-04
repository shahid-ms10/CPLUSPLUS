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

void find_key(node* head, int key){
    node* temp=head;
    node* current=head;
    int count=0;
    while(temp!=NULL){
        if(current->data==key){
            cout<<count<<endl;
            count++;
            temp=temp->next;
            current=current->next;
        }
        else{
            cout<<"node not present"<<endl;
        }
    }
}

int main(){
    node *head=getnode();
    print(head);
    int key;
    find_key(head,key);
}