#include<iostream>
using namespace std;

int main(){
    int x=10;
    float y =5.8;
    cout<<&x<<endl;
    cout<<&y<<endl;
    int *ptrx = &x;
    float *ptry = &y;
    cout<<ptrx<<endl;
    cout<<ptry;

}