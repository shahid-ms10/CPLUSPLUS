#include<iostream>

using namespace std;

void dto(int n){
    int r;
    int octal=0;
    while(n>0){
        r = n % 8;
        n = n / 8;
        cout<<r;
    }
}
int main(){
    int n;
    cin>>n;
    dto(n);
    return 0;
}