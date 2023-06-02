#include<iostream>
#include<vector>
using namespace std;

int searchinSortedRotated(vector<int> &input){
    int lo=1;int hi=input.size()-1;
   while(lo<=hi){
         int mid = (lo+hi)/ 2 ;
         
            if(mid==0){
                if(input[mid]>input[mid+1]){
                    return 0;
                }else{
                    return 1;
                }
            }
            else if (mid == input.size()-1) {
                
                    if(input[mid]>input[mid-1]){
                        return input.size()-1;
                    }else{
                        return input.size()-2;
                    }               
                }else{
                if(input[mid]>input[mid-1] && input[mid]>input[mid+1]){
                    return mid;
                }else if(input[mid-1]<input[mid]){
                lo=mid+1;
            }else{
                hi=mid-1;
            }
        }
            
            
            
         }
        return -1;

         
    }



int main(){
    vector<int> vec{1,2,1,2,6,10,3};
    cout<<searchinSortedRotated(vec);

    return 0;
}
