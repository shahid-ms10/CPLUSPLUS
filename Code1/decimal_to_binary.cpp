#include<iostream>

using namespace std;

void dtb(int n){
    int r,bi = 0;
    int ans=0; 
    while(n>0){
        r = n % 2;
        n = n/2;
        ans = ans*10 + r;
    }
    while(ans>0){
        r = ans % 10;
        bi = bi*10 + r;
        ans = ans/10;
    }
    cout<<bi;    
}

int main(){
    int n;
    cin>>n;
    dtb(n);
    return 0;
}