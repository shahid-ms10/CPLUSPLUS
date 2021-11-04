#include <iostream>

using namespace std;

void sum(int n){
    int sum = 0;
    while(n>0){
        sum = sum + n;
        n--;
    }
    cout<<sum;
}
int main()
{
    int n;
    cin>>n;
    sum(n);
    return 0;
}