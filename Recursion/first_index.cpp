#include <iostream>

using namespace std;

int ans=0;
int firstindex(int a[], int n, int k){
    if(n==0){
        return -1;
    }
    if(a[0]==k){
        return 0;
    }
    ans= firstindex(a+1,n-1,k);
    if(ans==-1){
        return -1;
    }
    else{
        return ans+1;
    }

}
int main(){
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
        int k;
    cin>>k;
    cout<<firstindex(a,n,k);
    return 0;
}