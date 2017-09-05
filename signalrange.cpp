#include <iostream>
using namespace std;

void print(int arr[],int n,int j){
   int cnt=0;
    for(int i=j-1;i>=0;--i){
        if(arr[j]>arr[i]){
            cnt++;
        }
    }
cout<<cnt+1<<" ";
}

int main()
{
  int t;cin>>t;
  for(int k=0;k<t;++k){
      
      
      
      int n;cin>>n;
      int arr[100];
      for(int i=0;i<n;++i){
          cin>>arr[i];
      }
      for(int i=0;i<n;++i){
          print(arr,n,i);
      }
      
     cout<<endl;
  }
    return 0;
}