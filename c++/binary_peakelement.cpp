#include<iostream>
#include<vector>
using namespace std;

int searchinSortedRotated(vector<int> &input){
    int lo=0;int hi=input.size()-1;
    int ans=-1;

   
    while(lo<=hi){
         int mid = (lo+hi)/ 2 ;
         while (lo<=hi){
            if(input[mid-1]<input[mid]){
                //inc seq
                ans=max(ans,mid);
                lo=hi+1;
            }else{
                hi=mid-1;
            }
         }
        
         
    }
return ans;
}


int main(){
    vector<int> vec{4,5,6,7,2,3};
    cout<<searchinSortedRotated(vec);

    return 0;
}
