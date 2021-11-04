#include <iostream>

using namespace std;

int main()
{
    int n,r;
    cin>>n;
    int reverse = 0;
    while(n>0){
        r = n%10;
        reverse = reverse*10 + r;
        n = n/10;
    }
    cout<<reverse;
    return 0;
}