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

int count_recursion(node *head){
    node *temp=head;
    if(temp==NULL){
        return 0;
    }
    return 1+count_recursion(temp->next);
}

node* append(node* head,int n){
    node* current=head;
    int len=count_recursion(head);
    int count=len-n;
    int i=1;
    if(n==0 || count==0){
        return head;
    }
    while(i<count){
        current=current->next;
        i++;
    }
    node* head2=current->next;
    current->next=NULL;
    node* tail=head2;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    tail->next=head;
    return head2;
}

int main(){
    node *head1=getnode();
    print(head1);
    int n;
    cin>>n;
    node* head2=append(head1,n);
    print(head2);
}
