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
        if(nexti==0){
            cout<<"Stack is empty"<<" ";
            return INT_MIN;
        }
        nexti--;
        return data[nexti];
    }
    //peek of stack
    int top(){
        if(isempty()){
            cout<<"Stack is empty"<<" ";
            return INT_MIN;
        }
        return data[nexti-1];
    }
    void display(){
        for(int i=nexti-1;i>=0;i--){
            cout<<data[i]<<" ";
        }
    }
};

int main(){
    cout<<"enter total size of stack"<<endl;
    int tsize;
    cin>>tsize;
    stackarray s(tsize);
    int choice,value;
    do{
        cout<<"Enter choice 1.Push  2.Pop 3.top 4.isempty 5.display"<<endl;
        cin>>choice;
        switch(choice){
            case 1: cout<<"Enter Value:\n";
                    cin>>value;
                    s.push(value);
                    cout<<endl;
                    break;
            case 2: cout<<s.pop()<<endl;
                    break;
            case 3: cout<<s.top()<<endl;
                    break;
            case 4: cout<<s.isempty()<<endl;
                    break;
            case 5: s.display();
                    cout<<endl;
                    break;
        }
    }
    while(choice!=0);{
        cin>>choice;
    }
}
/*int main()
{
    stackarray s(4);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.top()<<endl;
    cout<<s.isempty()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.isempty()<<endl;
    return 0;
    */
