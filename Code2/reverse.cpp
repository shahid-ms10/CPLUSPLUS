#include<iostream>
#include<string.h>

using namespace std;

int reverse(char a[],int l){
    string str="";
    string final="";
    for(int i=l-1;i>=0;i--){
        if(a[i]==' '){
            final=final+str+' ';
            str="";
        }
        else{
        str=a[i]+str;
        }
    }
    cout<<final+str<<endl;
}

int main(){
    char a[100]; 
    cin.getline(a,100);
    int l=strlen(a);
    reverse(a,l);
    return 0;
}
