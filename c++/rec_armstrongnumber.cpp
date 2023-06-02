#include<iostream>
using namespace std;


int pow_rec(int p, int q) {
    if (q==0){
        return 1;
    }
   if(q%2==0){
    int result = pow_rec(p,q/2);
    return result*result;
   }
    else{
        int result = pow_rec(p,(q-1)/2);
        return p*result*result;

    }
}

int f(int n, int k){
    if (n==0) return 0; //base case
    return pow_rec(n%10,k)+ f(n/10,k); //call power rec
}


int main(){
    int n,k=0;
    cin>>n;
    int temp=n;
  

    int result = f(n,k);
    if (result== n){
        cout<<"yes";   
         }
    else{
        cout<<"no";
    }
    return 0;


}