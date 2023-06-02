#include<iostream>
#include<vector>
using namespace std;

int firstposition(vector<int> &vec , int target){
    int lo=0;int hi=vec.size()-1;
    int ans=-1;

    while(lo<=hi){
         int mid = (lo+hi)/ 2 ;
         
         if(vec[mid]==target){
            ans=mid;
            hi=mid-1;
         }
         else if (vec[mid]>target) {
            hi=mid-1;
         }
         else{
            lo=mid+1;
         }

         
         
    }
    return ans;
       
        
    
}


int main(){
    vector<int> vec{1,2,3,4,4,5,7,8};
    int target=4;

    cout<<firstposition(vec,target);

    return 0;
}

