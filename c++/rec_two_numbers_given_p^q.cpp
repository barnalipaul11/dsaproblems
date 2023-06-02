#include<iostream>
using namespace std;

int f(int p, int q) {
    if (q==0){
        return 1;
    }
    return f(p,q-1)*p;
}

int main(){
    int result= f(2,4);
    cout<<result;
    return 0;
}

