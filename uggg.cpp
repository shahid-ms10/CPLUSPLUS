#include <iostream>
using namespace std;
class node{
    public:
  int data;
  node *next;
  node(int data){
      this->data= data;
      next= NULL;
  }
};
void print(node *head){
    cout<<"   list ";
    while(head!=NULL){
        cout<<head->data<<" ";
        head= head->next;
    }cout<<endl;
}
node *getN(node *temp){
    
        node *head;
        node *tail;
    if(temp->next==NULL){
        head==NULL;
        tail==NULL;
    }
        if(head==NULL){
            node *newNode= new node(temp->data);
            head= newNode;
            tail= newNode;
        }else{
            node *newNode= new node(temp->data);
            tail= newNode;
            tail= tail->next;
        }
    return head;
}
node *reverceR(node *head){   // 2,3,7,9 
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* final_head=reverceR(head->next); 
    head->next->next=head;
    head->next=NULL; 
    //node *head1= getN(head);
    return final_head;
    //print(head);
    //reverceR(head->next);
    
}
int main()
{
    node h1(2);
    node h2(3);
    node h3(7);
    node h4(9);
    node *head1= &h1;
    h1.next= &h2;
    h2.next= &h3;
    h3.next= &h4;
    print(head1);
    node *head;
    head= reverceR(head1);
    print(head);

    return 0;
}