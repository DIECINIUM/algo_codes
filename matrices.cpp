#include<bits/stdc++.h>
using namespace std ;
/* matrices in c++
  type of matrices 
  diagonal matrix
  lower triangular matrix
  upper triangular matrix 
  symmetric matrix
  tridiagonal matrix
  band matrix 
  teopitiz matrix
  sparse matrix
  */
 class diagonal{
    private :
       int n ;
       int* a;
    public :
    diagonal(){
        n= 2 ;
        a= new int[2] ;
    }
    diagonal(int n){
        this->n=n ;
        a= new int[n] ;

    }
    void set(int i,int j,int x){
        if(i==j){
            a[i-1]=x ;
        }
    }
    int get(int i,int j){
        if(i==j){
            return a[i-1] ;
        }
        else{
            return -1 ;
        }
    }
    void display(){
        for(int i=0;i<n;i++){
            cout<<a[i]<<" " ;
        }
        cout<<'\n' ;
    }
 };
// lower traingular matrix row/coloum 
// i>j a[i][j]!=0  and when i<j a[i][j]==0 
// is called lower triangular matrix 
class lowertri{
    private :
     int n ;
     int*qfor(auto e : v) {
        ll t = ceil(e, x) - 1;
        if(t > k) break;
        ans--;
        k -= t;
    }  a ;
    public :
      lowertri(int n){
        this->n=n ;
        a = new int[n]; 

    for (int i = 0; i < n; ++i) {
        a[i] = new int[n]; 
    }
      }
}

int main(){
 
   
}