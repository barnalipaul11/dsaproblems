#include<iostream>
using namespace std;

void f(int num, int k){
    //base case
    if(k<1){
        return ;
    }
    f(num,k-1);
    
    cout<<(num*k)<<" ";
}

int main(){
    f(12,5);
    return 0;
    
}