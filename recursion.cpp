#include<bits/stdc++.h>
using namespace std ;
// global variables
int k= 0 ;  // calculate no of function calls in tree recursion 
long long int dp[100000] ;
vector<int> a ;
void goascending(int n){   // example of tail recursion it excutes remaing code 
                           // during returning time 
    if(n>0){
        goascending(n-1) ;
        cout<<n<<" " ;
    }

}
void godescding(int n){
    if(n>0){              // example of head recursion it excutes remaing code 
                          // during calling time 
        cout<<n<<" " ;
        godescding(n-1) ;
    }
}
void func(int n){      // it is an example of tree recursion having multiple branches
       k++ ;            // it has time complexity of o(2^n) and space o(n)
    if(n>0){
                       // for n=3 it ,made 15 calls 
        cout<<n<<" " ;
        func(n-1) ;
        func(n-1) ;
    }
   
}
void inderect2(int n) ;
void inderect1(int n){      // it is an example of inderect recursion
    if(n>0){                // they call circullary one another until condition are not meet
        cout<<n ;
        inderect2(n-1) ;     // you have to intialize second fucntion before first for not any error
        
    }
}
 void inderect2(int n){
    if(n>1){
        cout<<n ;
        inderect1(n/2) ;
    }

}
int nest(int n){
    if(n>100) return n-10 ;    // it is a nested recursion calling inside parameter during return time
     return nest(nest(n+11)) ;   // it stops when it return value two times simulatesoly 

    
   
}
void swaping(vector<int>&a,int l,int r){
     if(l<=r){
        return  ;
     }
     else{
        swap(a[l],a[r]) ;
        swaping(a,l+1,r-1) ;
     }
}
long long int fib(long long int n){                 // fibonacci series using recursion and memoization 
if(n<=1){
    return n ;
}
return fib(n-1)+fib(n-2) ;

}
long long int f(long long int n){
    if(n<=1){
        dp[n]=n ;
        return n ;
    }
    if(dp[n]==0){
        dp[n]=f(n-1)+f(n-2) ;
        return dp[n] ;
    }
    else{
             return dp[n] ;
    }
    
}



int main(){

 

 a.push_back(1);
 a.push_back(2);
 a.push_back(3);
 a.push_back(4);
 a.push_back(5);
  int n ;
  cin>> n ;
 auto start = std::chrono::high_resolution_clock::now();
      // code or program ;
       cout<<f(n)<<endl ;
 auto end = std::chrono::high_resolution_clock::now();
     std::chrono::duration<double> duration = end - start;
     cout<<"RUNTIME OF PROGRAM USING DP :"<<duration.count()<<endl ;
     auto start1= std:: chrono:: high_resolution_clock::now() ;
       cout<<fib(n)<<endl ;
     auto end1= std::chrono:: high_resolution_clock::now() ;
     std:: chrono:: duration<double> tim=end1- start1 ;
     cout<<"RUNTIME USING RECURSION :"<<tim.count()<<endl ;

 cout<<'\n' ;
  return 0 ;
}