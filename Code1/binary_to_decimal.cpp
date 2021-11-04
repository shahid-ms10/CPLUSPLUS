#include<iostream>

using namespace std;

void btd(int n){
    int base = 1;
    int decimal = 0;
    while(n>0){
        int r = n % 10;
        decimal = r*base + decimal;
        base = base*2;
        n = n/10;
    }
    cout<<decimal;
}

int main(){
    int n;
    cin>>n;
    btd(n);
    return 0;
}