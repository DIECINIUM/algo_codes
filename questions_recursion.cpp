#include<bits/stdc++.h> 
using namespace std ;
int sum(int n){
    int su=0 ;
    if(n>0){
       
       return sum(n-1)+n ;
    }
    else{
        return su ;
    }
}
int fact(int n){
    if(n>0){
        return fact(n-1)*n ;
    }
    else{
        return 1 ;
    }
}
int power(int n,int m){
    if(m>0){
        return power(n,m-1)*n ;
    }
    else{
        return 1 ;
    }
}
float taylor(int x,int n){
    static float p=1 ,f=1 ;
    float r ;
    if(n==0){
        return 1.0 ;
    }
    else{
       r= taylor(x,n-1) ;
       p=p*x ;
       f=f*n ;
       return r+p/f  ;
    }
}
int main(){
    int n ,m;
   cout<<taylor(1,2)<<endl ;
    return 0 ;
}
