#include<iostream>
#include<string.h>

using namespace std;

int reverse(char a[],int l){
    int i=0;
    int j=l-1;
    int t,b;
    while(i<j){
        t=a[i];
        a[i]=a[j];
        a[j]=t;
        i++;
        j--;
    }
    cout<<endl;
    int x=0;
    int e;
    for(int i=0;i<=l;i++){
        if((a[i]==' ')||(a[i]=='\0')){
            b=x;
            e=i-1;
            while(b<e){
                t=a[b];
                a[b]=a[e];
                a[e]=t;
                b++;
                e--;
            }
            x=i+1;
        }
    }
    for(int i=0;i<l;i++){
    cout<<a[i];
    }
}

int main(){
    char a[100];
    cin.getline(a,100);
    int l=strlen(a);
    reverse(a,l);
    return 0;
}