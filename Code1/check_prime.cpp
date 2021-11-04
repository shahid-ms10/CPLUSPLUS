#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int s;
    for(int i=2;i<n;i++){
        if(n==2){
            cout<<"prime"<<endl;
            s=1;
            break;
        }
        else if(n%i==0){
            cout<<"Non prime"<<endl;
            s=1;
            break;
        }
    }
    if(s!=1){
        cout<<"prime"<<endl;
    }
    return 0;
}