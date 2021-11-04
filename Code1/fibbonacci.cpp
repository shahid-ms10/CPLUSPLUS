#include<iostream>

using namespace std;

void fibbo(int n){
    int t1=0,t2=1;
    int t3 ;
    for(int i=0;i<n;i++){
        cout << t1;
        t3 = t1 + t2;
        t1 =t2;
        t2 = t3;
        cout<<endl;
    }

}
int main(){
    int n;
    cin>>n;
    fibbo(n);
    return 0;
}