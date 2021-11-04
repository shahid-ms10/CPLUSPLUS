#include <iostream>

using namespace std;

int i=0;
int findkey(int a[], int n, int k){
    if(n==0){
        return false;
    }
    i++;
    
    findkey(a+1,n-1,k);
    if(a[0]==k){
        return i;
    }

}
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<findkey(a,n,k);
    return 0;
}