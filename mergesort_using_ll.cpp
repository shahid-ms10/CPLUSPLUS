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

void print(node* head){
    node* temp=head;
    while(temp!=0){
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

int count_recursion(node *head){
    node *temp=head;
    if(temp==NULL){
        return 0;
    }
    return 1+count_recursion(temp->next);
}

node* middle1(node *head){
    node *temp1=head;
    node *temp2=head->next;
    while(temp2!=NULL && temp2->next!=NULL){
        temp1=temp1->next;
        temp2=(temp2->next)->next;
    }
    return temp1;
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

node *mergesort(node *head){
    if(head->next == NULL) {
        return head;
    }
    node *mid = middle1(head);
    node *head2 = mid->next; 
    mid->next = NULL;
    node *finalhead = mergelist(mergesort(head),mergesort(head2)); 
    return finalhead;
}

int main(){
    node *head1=getnode();
    print(head1);
    cout<<endl;
    node* head2=mergesort(head1);
    print(head2);
}
