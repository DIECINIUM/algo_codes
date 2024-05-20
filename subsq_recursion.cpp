#include<bits/stdc++.h>
using namespace std ;
int k=0 ;
void subseq(vector<int>&a,int idx,vector<int>&arr,int n){
    k++ ;
    cout<<"function call number: "<<k<<endl ;
    cout<<"index : "<<idx<<endl ; 
    cout<<"elements in array :" ;                // to take note of function stack 
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<'\n' ;
    if(idx==n){
        cout<<"printing of array"<<endl ;
    /* for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
        cout<<'\n' ; */
        return ;
    }

    
     arr.push_back(a[idx]) ;
      subseq(a,idx+1,arr,n);
       arr.pop_back(); 
    subseq(a,idx+1,arr,n) ;
     


}
int main(){
   vector<int>a ;
   vector<int>arr ;
   int n ;
   cin>>n ;
   for(int i=0;i<n;i++){
    int t ;
    cin>>t ;
    a.push_back(t) ;
   }
   subseq(a,0,arr,n) ;


}
