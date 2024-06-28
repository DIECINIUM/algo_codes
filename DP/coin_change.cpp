#include<bits/stdc++.h>
using namespace std ;
// recursion approach 
int change(vector<int>&a , int amount,vector<int>&dp){
    int ans=INT_MAX ;
    if(dp[amount]!=-1) return dp[amount] ; // use it to not evavlute further
    if(amount==0){
         return dp[0]=0;
    }
     

     for(int i=0;i<a.size();i++){  // checking all cases at each step of recursion tree
   
        if(amount-a[i]>=0){            // if amount left is postive 
            int subans=change(a,amount-a[i],dp) ; 
                                      //  check for each demonnation
            if(subans+1<ans){     // update the coins needed to make that amount 
                ans=subans+1 ;       
            }
        }
     }
    
   return dp[amount]=ans ;  // memoize the solution of sub problem 
}
int main(){

   vector<int>a={1,5,4,3,5,86,6,3,4,3,6,4,2,12,3,4,2,3} ;
   int amount= 32000 ;
  vector<int>dp(amount+1,-1) ;

    cout<<change(a,amount,dp)<<endl ; 
    return 0 ; 

}