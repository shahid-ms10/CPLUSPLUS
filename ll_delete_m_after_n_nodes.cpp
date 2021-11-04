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

node* delete_m_n(node* head,int m,int n){
    node* temp=head;
    node* temp1=head;
    node* temp2=head;
    int count1=1;
    int count2=1;
    while (temp1!=NULL){
        while(count1<=m){
            if(temp1==NULL){
                return temp1;
            }
            temp1=temp1->next;
            count1++;
        }
        temp2=temp1;
        while(count2<=n){
            if(temp2==NULL){
                return temp1;
            }
            temp2=temp2->next;
            count2++;
        }
        temp1->next=temp2;
        count1=count2=1;
        temp1=temp1->next;
    }
    return head;
}

int main(){
    node* head1=getnode();
    print(head1);
    cout<<endl;
    int m,n;
    cin>>m>>n;
    node* head2=delete_m_n(head1,m,n);
    print(head2);
}