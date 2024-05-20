#include<bits/stdc++.h> 
using namespace std ;
int main(){
    int t ;
    cin>>t ;
    while(t--){
      int n ;
      cin>>n ;
      for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top,right,left,down ;
            top=j ;
            right= i ;
            left= 2*n-2-i ;
            down= 2*n-2-j ;
            int ans= min(top,min(right,min(left,down)));
             cout<<n-ans<<" ";
        }
        cout<<endl ;
      }
         
    }
    
    return 0 ;
}