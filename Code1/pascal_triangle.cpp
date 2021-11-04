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

int  nCr(int n,int r){
    int C;
    C = fact(n)/(fact(n-r)*fact(r));
    return C;
}

 void pascal(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<nCr(i,j)<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    pascal(n);
    return 0;
}