#include <iostream>

using namespace std;

int sum=0;
int arraysum(int a[],int n){
    if(n==0){
        return 0;
    }
    sum=sum+a[0];
    arraysum(a+1,n-1);
    return sum;
}
int main(){
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<arraysum(a,n);
    return 0;
}