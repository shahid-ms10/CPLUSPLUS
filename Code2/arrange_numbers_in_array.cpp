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
    int a=1,b=n;
    for(int i=0;i<n;i++){
        if(i<=(n-1)/2){
            A[i]=a;
            a=a+2;
        }
        else{
            if((n%2)==0){
                A[i]=b;
            }
            else{
                A[i]=b-1;
            }
            b=b-2;
        }
    }
    print(A,n);
    return 0;
}