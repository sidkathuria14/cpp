#include <iostream>
#include <vector>
using namespace std;
int main()
{
int t;cin>>t;
for(int k=0;k<t;++k){
    
    
    int n;cin>>n;vector<int> v(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
        }
    
    int query;cin>>query;
    for(int i=0;i<query;++i){
        int p;cin>>p;
        
         int position =-1;
   for(int j=0;j<n;++j){
       if(v[j] == p){
           position = j+1;
       }
   }
//   pos!=-1 ? cout<<pos + 1<<endl : cout<<pos<<endl
   cout<<position<<endl;
        }
    cout<<endl;
}
    return 0;
}
