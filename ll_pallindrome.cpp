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
int count_recursion(node *head){
    node *temp=head;
    if(temp==NULL){
        return 0;
    }
    return 1+count_recursion(temp->next);
}

node* reverse(node* head){
    node* prevptr=NULL;
    node* currentptr=head;
    node* nextptr;
    while(currentptr!=NULL){
        nextptr=currentptr->next;
        currentptr->next=prevptr;

        prevptr=currentptr;
        currentptr=nextptr;
    }
    return prevptr;
}

bool pallindrome_check(node* head){
    node* head1=head;
    int len=count_recursion(head);
    int count=len/2;
    int i=0;
    while(i<count){
        head1=head1->next;
        i++;
    }
    node* head2=head1->next;
    head1->next=NULL;
    node* head3=reverse(head2);
    print(head);
    cout<<endl;
    print(head3);
    cout<<endl;
    while(head->next!=NULL && head3->next!=NULL){
        if(head->data==head3->data){
            return true;
        }
        else{
            return false;
        }
    }
}
int main(){
    node* head1=getnode();
    print(head1);
    cout<<endl;
    cout<<pallindrome_check(head1);
}