#include <iostream>
#include <climits>

using namespace std;

class stackarray{
    int *data;
    int nexti;
    int capacity;
    public:
    stackarray(int tsize){
        int *data=new int[tsize];
        nexti=0;
        capacity=tsize;
    }
    //number of elements present in stack
    int size(){
        return nexti;
    }
    bool isempty(){
        if(nexti==0){
            return true;
        }
        else{
            return false;
        }
    }
        //return nexti==0;
    //insert new element in stack
    void push(int element){
        if(nexti==capacity){
            cout<<"stack is full"<<endl;
            return;
        }
        else{
            data[nexti]=element;
            nexti++;
        }
    }
    //delete an element in stack
    int pop(){
        nexti--;
        if(nexti==0){
            cout<<"Stack is empty"<<endl;
            return INT_MIN;
        }
        return data[nexti];
    }
    //peek of stack
    int top(){
        if(isempty()==0){
            return INT_MIN;
        }
        return data[nexti-1];
    }
};
int main(){
    stackarray s(3);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    cout<<s.top();
    cout<<s.pop();
    cout<<s.pop();
    cout<<s.pop();
    cout<<s.isempty();
}