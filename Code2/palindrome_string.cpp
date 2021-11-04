#include <bits/stdc++.h>

using namespace std;

int s;
bool palindrome(string str, int l, int n){
    if((s-1)/2>l){
        return true;
    }
    if(str[0]!=str[l-n]){
        return false;
    }
    palindrome(str.substr(1),l-1,n+1);
}

int main(){
    string str;
    getline(cin, str);
    int l= str.length();
    s=l;
    int n=1;
    cout<<palindrome(str,l,n)<<endl;
}