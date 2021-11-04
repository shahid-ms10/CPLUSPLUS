#include <iostream>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int arr[n];
  int k=1;
  for(int i=0 ;i<=((n-1)/2);i++){
      arr[i]=k; 
      k+=2;
  }
      if(n%2==0){ 
          k=n;
           for(int i=(((n-1)/2)+1) ;i<n;i++){
          arr[i]=k;
          k-=2;
           }
      }
      else{ 
           k=n-1;
            for(int i=(((n-1)/2)+1) ;i<n;i++){
          arr[k]=k;
          k-=2;
            }
      }
  
      cout<<endl;
      for (int i=0;i<n;i++){
          cout<<arr[i]<<" ";
      }
 

    return 0;
}