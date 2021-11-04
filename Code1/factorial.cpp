#include<iostream>

using namespace std;

void fact(int n){
    int factorial = 1;
    while(n>=1){
        factorial = factorial*n;
        n--;
    }
    cout<<factorial;
}
int main()
{
    int n;
    cin>>n;
    fact(n);
    return 0;
}