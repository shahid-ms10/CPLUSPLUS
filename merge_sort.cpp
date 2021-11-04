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

void print1(node* head,node* mid){
    node* temp=head;
    while(temp!=mid){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}    
void print(node* head){
    node* temp=head;
    while(temp!=0){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}    

pair<node*, node*> getnode(){
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
    return make_pair(head,tail);
}

int count_recursion(node *head){
    node *temp=head;
    if(temp==NULL){
        return 0;
    }
    return 1+count_recursion(temp->next);
}

node* middle1(node *head,node* tail){
    node *temp1=head;
    node *temp2=head;
    while(temp2!=tail && temp2->next!=tail){
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
    final_tail->next=NULL;
    print(final_head);
    return final_head;
}

node* mergesort(node* head, node* tail){
    if(head==tail){
        return head;
    }

    node* mid=middle1(head,tail);
    cout<<mid->data<<endl;
    node* temp=mid->next;
    mid->next=NULL;
    node* f =mergesort(head,temp);
    print(f);
    cout<<endl;
    node* s =mergesort(temp,tail);
    node* h =mergelist(f,s);
    return h;
}
// node *mergesort(node *head){
//     if(head->next == NULL) {
//         return head;
//     }
//     node *mid = middle1(head);
//     node *head2 = mid->next; 
//     mid->next = NULL;
//     node *finalhead = mergelist(mergesort(head),mergesort(head2)); 
//     return finalhead;
// }
int main(){
    pair<node*,node*> ht=getnode();
    print(ht.first);
    //cout<<ht.second->data;
    cout<<endl;
    node* head2=mergesort(ht.first,ht.second);
    print(head2);
}
