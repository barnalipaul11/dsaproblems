#include<iostream>
using namespace std;

int gcd(int a, int b){
    if (b>a) return gcd(b,a);
    if (b==0) return a;  //base case
    return gcd(b,a%b);
}

int main(){
    int ans = gcd(48,72);
    cout<<ans;

    return 0;


}