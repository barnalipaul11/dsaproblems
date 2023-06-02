#include<iostream>
using namespace std;

string f(string &s,int idx, int n){
    if(idx==n){
        return "";
    }
    string cur="";
    cur+=s[idx];
    return((s[idx]== 'a')? "": cur)+f(s,idx+1,n);
}

int main(){
    string s="abbdsac";
    int n = 7;
    cout<<f(s,0,n);

    return 0;
}