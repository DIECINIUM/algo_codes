#include<bits/stdc++.h>

using namespace std ;
void toh(int n,int a,int b,int c){
    if(n>0){
        toh(n-1,a,c,b) ;
        cout<<a<<" " <<c<<endl ;
        toh(n-1,b,a,c);
    }
}
int main(){
    int n ;
    cin>>n ;
    cout<<pow(2,n)-1<<endl ;
    toh(n,1,2,3) ; // where a=1 ,b=2 ,c=3 
    return 0 ;

}