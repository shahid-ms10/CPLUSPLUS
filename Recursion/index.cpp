#include <iostream>

using namespace std;

void subarray(int a[], int sum, int l){
    int s=0;
    for(int i=0;i<l;i++){
        for(int j=i;j<l;j++){
            for(int k=i;k<=j;k++){
                //cout<<a[k]<<" ";
                s=s+a[k];
            }
            cout<<endl;
            //cout<<s<<endl;
            if(s==sum){
                cout<<i<<" "<<j<<endl;
            }
            s=0;
        }
    }
}

int main(){
    int n,sum;
    cin>>n>>sum;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    subarray(a,sum,n);
    return 0;
}
