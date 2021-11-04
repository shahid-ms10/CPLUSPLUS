#include<iostream>
#include<string.h>

using namespace std;

int reverse(char name[],int l){
    int i;
    for( i= l-1; i>=0;i--){
        cout<<name[i];
    }
}
int main(){
    char name[100];
    cin.getline(name,100);
    int l=strlen(name);
    reverse(name,l);
    return 0;
}

// #include <iostream>
// #include<string.h>
// using namespace std;

// int main()
// {
//    char arr[100];
//    cin.getline(arr,100);
//    cout<<arr<<endl;
//    cout<<strlen(arr)<<endl;
//    int k= strlen(arr);
// for(int i=0;i<=k;i++)
// {
//     if(i<=(k-1)/2){
//         int temp= arr[i];
//     arr[i]=arr[k-i-1];
//     arr[k-i-1] = temp;
//     }
// }
// cout<<arr;
// /*for(int i=0;i<strlen(arr);i++){
//     cout<<arr[i];
// }*/
//     return 0;
// }