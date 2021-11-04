#include <iostream>

using namespace std;

int ans=0;
int lastindex(int a[], int n, int k){
    if(n==0){
        return -1;
    }
    ans= lastindex(a+1,n-1,k);
    if(a[n-1]==k){
        return 0;
    }
    if(ans==-1){
        return -1;
    }
    else{
        return ans;
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
    cout<<lastindex(a,n,k);
    return 0;
}