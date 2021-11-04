#include<iostream>
#include<cmath>

using namespace std;

bool prime_check(int z){
    for(int i=2;i<=sqrt(z);i++){
        if(z%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<endl;
    for(int i=a;i<=b;i++){
        if(prime_check(i)){
            cout<<i<<endl;
        }
    }
}