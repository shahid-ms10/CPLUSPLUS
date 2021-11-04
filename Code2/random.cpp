#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    char arr[20];
    cout<<"enter arr ";
    cin.getline(arr,20);
    int l= strlen(arr);
    char arr1[20];
    cout<<"enter arr1 ";
    cin.getline(arr1,20);
    int l1= strlen(arr1);
    int i, j;
    for(i=0;i<l;i++){
        for(j=0;j<l1;j++){
            if(arr1[j]==arr[i]){
                arr1[j]=1;
            }
        }
    }
    
    bool r=true;
     for(j=0;j<l1;j++){
        if(arr1[j]!=1 || l!=l1){
            r=false;
        }
     }
     if(r==true){
         cout<<"permutation"<<endl;
     }else{
         cout<<"not permutation"<<endl;
     }
    return 0;
}