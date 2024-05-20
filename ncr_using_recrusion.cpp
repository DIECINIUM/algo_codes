#include<bits/stdc++.h>
using namespace std ;
long long int nc(long long int n,long long int r){
    if(n==r || r==0){
        return 1 ;
    }
    else{
        return nc(n-1,r-1)+nc(n-1,r) ;
    }
}
long long int fe(long long int n1,long long int r1){
    if(n1==r1 || r1==0){
        return 1 ;
    }
    else{
        return n1/r1 *fe(n1-1,r1-1) ;
    }
}
int main(){
   int t ;
   cin>>t ;
   while(t--){
    int n ,r;
    cin>>n >>r;
      auto start = std::chrono::high_resolution_clock::now();
        cout<<"combination of the "<<n<<"C"<<r<<"is "<<fe(n,r)<<endl ;
       auto end = std::chrono::high_resolution_clock::now();
     std::chrono::duration<double> duration = end - start;
     cout<<"RUNTIME OF F:"<<duration.count()<<endl ; // f function is working wrong because of truncated divison in each step 
     auto start1 = std::chrono::high_resolution_clock::now();
        cout<<"combination of the "<<n<<"C"<<r<<"is "<<nc(n,r)<<endl ;
       auto end1 = std::chrono::high_resolution_clock::now();
     std::chrono::duration<double> duration1 = end1- start1;
     cout<<"RUNTIME OF ncr :"<<duration1.count()<<endl ;
   }
   return 0 ; 

}