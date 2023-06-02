#include<iostream>
#include<string>
using namespace std;

int longestones(string str, int k){

    int start=0;
    int end=0;
    int zero_count =0;
    int max_length=0;

    for(;end<str.length();end++){

        if(str[end]=='0'){
            zero_count++;
        }

        while(zero_count>k){
            if(str[start]=='0')zero_count--;
            start++; //contractng our window
        }

        max_length = max(max_length, end-start+1);
    }
    return max_length;
}

int main(){


    string str;
    cout<<"enter binary string: ";
    cin>>str;

    int k;
    cout<<"Enter max flips: ";
    cin>>k;



    cout<<longestones(str,k);

    return 0;

}