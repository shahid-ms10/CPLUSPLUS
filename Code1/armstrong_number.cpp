#include<iostream>

using namespace std;

int main()
{
    int n,r;
    cin>>n;
    int s=n;
    int cube_sum =0;
    while(n>0){
        r = n%10;
        cube_sum = r*r*r +cube_sum;
        n = n/10;
    }
    if(cube_sum == s){
        cout<<"Armstrong Number"<<endl;
    }
    else{
        cout<<"Not an Armstrong Number"<<endl;
    }
    return 0;
}
