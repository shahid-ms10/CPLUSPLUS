#include<bits/stdc++.h>

using namespace std;

void reverse(string str, int l){
    // breaking input into word using string stream
    stringstream s(str); // Used for breaking words
    string word; // to store individual words
    vector <string> store;
    while (s >> word)
    store.push_back(word);
for(int i=store.size()-1;i>=0;i--){
    cout<<store[i]<<" ";
}
}
int main(){
    string str; 
    getline (cin, str);
    int l=str.size();
    reverse(str,l);
    return 0;
}