#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n ;
    cin>>n ;

 vector<int>perm ;
 for(int i=1;i<=n;i++){
    perm.push_back(i) ;

 }

 while(next_permutation(perm.begin(),perm.end())){
       for(int i=0;i<n;i++){
        cout<<perm[i]<<" " ;
    }
    cout<<'\n' ;
 } ;
 
 
return 0 ;
}
// code for genrating permutation of numbers (1 to n) : using stl function 