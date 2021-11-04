#include<iostream>
#include<string.h>

using namespace std;

int merge(char a1[], char a2[], char a3[], int l1, int l2, int l3){
    int i=0,j=0,k=0;
    while((i<l1)&&(j<l2)){
        a3[k]=a1[i];
        k++;
        a3[k]=a2[j];
        k++;
        i++;
        j++;
    }
    while(i<l1){
        a3[k]=a1[i];
        i++;
        k++;
    }
    while(j<l2){
        a3[k]=a2[j];
        j++;
        k++;
    }
    for(int i=0;i<l3;i++){
        cout<<a3[i]<<" ";
    }
}

int main(){
    char a1[100];
    char a2[100];
    char a3[100];
    cin>>a1;
    cin>>a2;
    int l1=strlen(a1);
    int l2=strlen(a2);
    int l3=(l1+l2);
    merge(a1, a2, a3, l1, l2, l3);
    return 0;
}