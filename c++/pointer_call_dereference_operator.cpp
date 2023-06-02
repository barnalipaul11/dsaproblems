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
    cout<<*ptrx<<endl;
    *ptrx = 50;
    int thevalueofx = *ptrx;
    cout<<thevalueofx<<endl;
    cout<<&ptrx<<endl; //it will run the address of pointer

}