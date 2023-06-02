#include<iostream>
using namespace std;

int f( int*arr , int idx, int n ){
    if(idx==n-1){
        return arr[idx];
    }
    return max(arr[idx], f(arr,idx+1,n));
}

int main(){
    int arr[]={5,7,85,45,62};
    int n=5;
    int max= f(arr,0,n);
    cout<<max;

    return 0;
}