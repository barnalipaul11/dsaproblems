#include<iostream>
#include<vector>
using namespace std;

int searchinSortedRotated(vector<int> &input,int target){
    int lo=0;int hi=input.size()-1;
    int ans=-1;

    if(input.size()==1) return input[0];
    if(input[lo]<input[hi]){ //sorted array
        return input[lo];
    }

    while(lo<=hi){
         int mid = (lo+hi)/ 2 ;
         if(input[mid]==target) return mid;
         if(input[mid]>input[lo]){
            if(target>input[lo] && target <= input[mid]){
                 hi=mid-1;
            }
             else {
                lo=mid+1;
            }
         }else{
            if(target>=input[mid] && target <=input[hi]){
                lo=mid+1;
            }else{
                hi=mid-1;
            }
         }
    
    }
return -1;
}


int main(){
    vector<int> vec{4,5,6,7,2,3};
    int target=7;
   

    cout<<searchinSortedRotated(vec,target);

    return 0;
}
