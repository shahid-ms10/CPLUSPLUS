#include<iostream>

using namespace std;

int length(char name[]){
    int l=0;
    for(int i=0;name[i]!='\0';i++){
        l++;
    }
    return l;
}
int main(){
    char name[100];
    cin>>name;
    cout<<name<<endl;
    cout<<length(name)<<endl;
    return 0;
}