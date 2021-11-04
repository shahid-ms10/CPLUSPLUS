#include <iostream>

using namespace std;

void reverse(int A[],int n){
        for(int j=n-1;j>=0;j--){
        cout<<A[j]<<" ";
    }
/*    int b=0;
    for(int i=0;i<(n/2)+1;i++){
        b=A[i];
        A[i]=A[n-1-i];
        A[n-1-i]=b;
    }
    for(int j=0;j<n;j++){
        cout<<A[j]<<" ";
    }
}*/
}
int main()
{
    int n = 5;
    int A[] = {1,2,3,4,5};
    reverse(A,n);
    return 0;
}
