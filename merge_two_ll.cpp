#include <iostream>
#include <climits>

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

node* mergelist(node* head1, node* head2){
    node* final_head=NULL;
    node* final_tail=NULL;

    while(head1!=NULL && head2!=NULL){
        if(final_head==NULL){
            if(head1->data<head2->data){
                final_head=head1;
                final_tail=head1;
                head1=head1->next;
            }
            else{
                final_head=head2;
                final_tail=head2;
                head2=head2->next;
            }
        }
        else{
            if(head1->data<head2->data){
                final_tail->next=head1;
                final_tail=final_tail->next;
                head1=head1->next;
            }
            else{
                final_tail->next=head2;
                final_tail=final_tail->next;
                head2=head2->next;
            }
        }
    }
    while(head1!=NULL){
        final_tail->next=head1;
        final_tail=final_tail->next;
        head1=head1->next;
    }
    while(head2!=NULL){
        final_tail->next=head2;
        final_tail=final_tail->next;
        head2=head2->next;
    }
    return final_head;
}

int main(){
    node *head1=getnode();
    print(head1);
    cout<<endl;
    node *head2=getnode();
    print(head2);
    cout<<endl;
    node *head3=mergelist(head1,head2);
    print(head3);
    //int i, data;
    //cin>>i>>data;
    //head= insertnode(head,i,data);
    //print(head);
    //cout<<count_iterative(head)<<endl;
    //cout<<count_recursion(head)<<endl;
    //cout<<middle1(head)<<endl;
    //cout<<middle2(head);
}