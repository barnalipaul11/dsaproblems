#include<iostream>
using namespace std ;

int f(int n){
    //base case
    if(n==0){
        return 0;
        }
    //call function
    if (n%2==0){
        return f(n-2)+(n-1)-n;
    }
    else{
       return f(n-2)-(n-1)+n; 
    }
}

int main(){
    int sum = f(10);
    cout<<sum;
    return 0;
}