// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std ;

int main() {
    int t ;
    cin>>t ;
    while(t--){
        string s="" ;
        cin>>s ;
         int cnt=0;
        
         int goal_a=0 ;
         int goal_b=0 ;
         while(cnt<10){
            if(cnt%2==0){
                if(s[cnt]=='1') goal_a++ ;
                else if(s[cnt]=='?'){
                      if(goal_a>=goal_b) goal_a++ ;
                      
                }
                if(goal_a>goal_b){
                    if((10-cnt-1)/2+1<abs(goal_a-goal_b)) break ;
                }
                else if(goal_b>goal_a){
                    if((10-cnt-1)/2<abs(goal_a-goal_b)) break ;
                }
            }
            else{
                    if(s[cnt]=='1') goal_b++ ;
                else if(s[cnt]=='?'){
                      if(goal_b>=goal_a) goal_b++ ;
                      
                }
                if(goal_b>goal_a){
                    if((10-cnt-1)/2+1<abs(goal_a-goal_b)) break ;
                }
                else if(goal_a>goal_b){
                    if((10-cnt-1)/2<abs(goal_a-goal_b)) break ;
                }
                
            }
            cnt++ ;
         }
        if(cnt==10){
            cout<<cnt<<endl ;
        }
        else{
            cout<<cnt+1<<endl ;
        }
        
    }

    return 0;
}