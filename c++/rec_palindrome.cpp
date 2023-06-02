#include<iostream>
using namespace std;

bool f(int num, int *temp){
    if(num>=0 and num<=9){
        int lastdigitoftemp = (*temp)%10;
        (*temp)/= 10;
        return (num == lastdigitoftemp);
    }

    bool result = (f(num/10 , temp) and (num%10) ==((*temp)%10));
    (*temp)/= 10;
    return result;
}


int main(){
    int num = 121;
    int anotherNum = num;
    int *temp = &anotherNum;
    cout<<f(num, temp);
    return 0;
}