#include<bits/stdc++.h>
using namespace std ;
int fib[100000] ;
int  f(int n){
    if(n==0 || n==1){
        fib[0]=0 ;
        fib[1]=1 ;
        return fib[n] ;
    }
    else if( fib[n]!=0 ){
        return fib[n] ;
    }

    return fib[n]= f(n-2)+ f(n-1) ;

}
int main(){
    int  n ;
    cin>> n ;
    while(n--){
        int t ;
        cin>>t ;
        cout<<"fibonacci number of given sequence"<<f(t)<<endl ;
        
    }
    return 0 ;
    
}