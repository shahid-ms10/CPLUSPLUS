#include<iostream>
#include<string.h>

using namespace std;

void htd(string n){
    int len = n.size();
    int base = 1;
    int hexa = 0;
    for(int i=len-1;i>=0;i--){
        if((n[i]>='0')&&(n[i]<='9')){
            hexa = (n[i]-48)*base + hexa;
            base = base*16;
        }
        else if((n[i]>='A'&&n[i]<'F')){
            hexa = (n[i]-55)*base + hexa;
            base = base*16;
        }
    }
    cout<<hexa;
}
int main(){
    string n;
    cin>>n;
    htd(n);
    return 0;
}