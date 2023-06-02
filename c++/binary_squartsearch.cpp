#include<iostream>

using namespace std;

int squrtroot( int x){
    int lo=1;int hi=x;
    int ans=-1;

    while(lo<=hi){
         int mid = (lo+hi)/ 2 ;
         
       
            
          if (mid*mid<=x) {
            ans=mid;
            lo=mid+1;
         }
         
         else{
            hi=mid-1;
         }

         
         
    }
    return ans;
       
        
    
}


int main(){
    int X=45;

    cout<<squrtroot(X);

    return 0;
}

