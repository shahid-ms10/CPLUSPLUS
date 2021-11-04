#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int s=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(s==0){
                cout<<"0"<<" ";
                s=1;
            }
            else{
            cout<<s<<" ";
            s=0;
            }
        }
        s = i % 2;
        cout<<endl;
    }
    return 0;
}