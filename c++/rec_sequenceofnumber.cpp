#include<iostream>
using namespace std;

void f(int n){
    //base case
    if(n<1){
        return;
    }
    //go to print the sequence of f(n-1)
    f(n-1);
    cout<<n<<" ";
}

int main(){
    f(10);
    return 0;
    
}