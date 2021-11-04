#include<iostream>

using namespace std;

int fact(int n){
    int factorial = 1;
    while(n>=1){
        factorial = factorial*n;
        n--;
    }
    return factorial;
}

void nCr(int n,int r){
    int C;
    C = fact(n)/(fact(n-r)*fact(r));
    cout<<C;
}
int main(){
    int n,r;
    cin>>n>>r;
    cout<<endl;
    nCr(n,r);
    return 0;
}