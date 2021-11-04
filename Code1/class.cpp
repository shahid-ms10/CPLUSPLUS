#include <iostream>
#include<cstring>
using namespace std;
int right_arrow(int i,int n){
     for(int j=n;j>=1;j--){
           if(j!=i){
                  cout<<" "<<" ";
                }
            else{
                  cout<<"#"<<" ";
                }
        }
        return 0;
}
int left_arrow(int i,int n){
          for(int j=2;j<=n;j++){
           if(j!=i)
            cout<<" "<<" ";
            else
             cout<<"#"<<" ";
                }
                return 0;
}

int main()
{
     
   int i,j;
   int n;
   cout<<"enter row and column"<<endl;
     cin>>n;
   for(i=1;i<=n;i++){
     right_arrow(i,n);
     left_arrow(i,n);
     right_arrow(i,n);   
    left_arrow(i,n);
          right_arrow(i,n);
          left_arrow(i,n);
          right_arrow(i,n);   
          left_arrow(i,n);
      cout<<endl;
   }
 return 0;
}