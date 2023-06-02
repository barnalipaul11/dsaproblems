#include<iostream>
using namespace std;

bool check(int *arr, int n, int i ,int x){
    //base case
    if(arr[i]==n)return false; //array is axhausted

    //recursive case
    return (arr[i]==x) || check(arr,n,i+1,x );
}

int main(){
    int arr[]={3,4,54,23,2};
    int n=5;
    int x=4;
    bool result=check(arr,n,0,x);
    if(result)cout<<"yes";
    else cout<<"no";
    return 0;
}