#include<iostream>
#include<vector>
using namespace std;

int firstposition(vector<int> &vec , int target){
    int lo=0;int hi=vec.size()-1;
    int ans=-1;

    while(lo<=hi){
         int mid = (lo+hi)/ 2 ;
         
         if(vec[mid]>=target){
            ans=mid;
            hi=mid-1;
         }
         else lo=mid+1;
         }
    return ans;
}

int lastposition(vector<int> &vec , int target){
    int lo=0;int hi=vec.size()-1;
    int ans=-1;

    while(lo<=hi){
         int mid = (lo+hi)/ 2 ;
         
         if(vec[mid]>target){
            ans=mid;
            hi=mid-1;
         }
         else lo=mid+1;
         }
    return ans;
}

int main(){
    vector<int>input{-3,-2,-2,-2,0,1,1,2,2,2,5,8,9};
    int target = 2;
    int lb = firstposition(input,target);
    vector<int>output;
    if(input[lb]!=target){
        output.push_back(-1);
        output.push_back(-1);
    }
    else{
        int ls = lastposition(input,target);
        output.push_back(lb);
        output.push_back(ls-1);
    }
    cout<<output[0]<<" "<<output[1];
    return  0;
}
