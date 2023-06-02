#include<iostream>
#include<vector>
using namespace std;

int MininSortedRotated(vector<int> &input){
    int lo=0;int hi=input.size()-1;
    int ans=-1;

    if(input.size()==1) return input[0];
    if(input[lo]<input[hi]){ //sorted array
        return input[lo];
    }

    while(lo<=hi){
         int mid = (lo+hi)/ 2 ;
         if(input[mid]>input[mid+1]) return mid+1;
         if(input[mid]<input[mid-1]) return mid;
         if(input[mid]>input[lo]){
            lo=mid+1;
         }else{
            hi=mid-1;
         }

    }
    return -1;
       
}


int main(){
    vector<int> vec{4,5,6,7,2,3};
   

    cout<<MininSortedRotated(vec);

    return 0;
}
