#include<iostream>

using namespace std;

void dtb(int n){
    int r,i = 0;
    int ans[32]; 
    while(n>0){
        ans[i] = n % 2;
        n = n / 2;
        i++;
    }
    for(int j = i-1;j>=0;j--){
        cout<<ans[j];
    }  
}

int main(){
    int n;
    cin>>n;
    dtb(n);
    return 0;
}