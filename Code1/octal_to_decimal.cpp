#include<iostream>

using namespace std;

void otd(int n){
    int base = 1;
    int octal = 0;
    while(n>0){
        int r = n % 10;
        octal = r*base + octal;
        base = base*8;
        n = n/10;
    }
    cout<<octal;
}
int main(){
    int n;
    cin>>n;
    otd(n);
    return 0;
}