#include<iostream>
using namespace std;

int f(int *arr,int idx,int n){
    if(idx==n-1){
        return arr[idx];
    }
    return arr[idx]+f(arr,idx+1,n);
}

int main(){
     int arr[]={5,8,7,75,100};
     int n=5;
     int sum=f(arr,0,n);
     cout<<sum;

     return 0;


}