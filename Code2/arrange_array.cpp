#include<iostream>

using namespace std;

void print(int A[], int n){
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int A[100];
    int s=0,e=n-1,val=1;
    //for(int i=0;i<=(n-1)/2;i++){
        while(s<=e){
        A[s]=val;
        val++;
        A[e]=val;
        val++;
        s++;
        e--;
    }
    if((n%2)!=0){
        A[s-1]=val-2;
    }
    print(A,n);
    return 0;
}