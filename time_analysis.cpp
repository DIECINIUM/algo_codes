#include<bits/stdc++.h> 
using namespace std ;    //chrono library is used in time analyis
int main(){
    
      auto start = std::chrono::high_resolution_clock::now();
      // code or program ;
       auto end = std::chrono::high_resolution_clock::now();
     std::chrono::duration<double> duration = end - start;
     cout<<"RUNTIME :"<<duration.count()<<endl ;

}
