#include<vector>
#include<iostream>
#include<string>
using namespace std;

string f(string str){

    vector<int>freq(26,0);

    for(int i=0; i<str.length();i++){
        int index = str[i]-'a';
        freq[index]++;
    }
    for(int i=0; i<str.length();i++){
        int j =0;
        while(freq[i]--){
            str[j++] = i + 'a';
        }
    }  

    return str;  

}

int main(){
    string str ="aghhhsikkso";

    cout<<f(str);

    return 0;
}
