#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool isanagram(string s1,string s2){

    //making freq vector
    vector<int>freq(26,0);

    //check the letter count
    if(s1.length()!=s2.length()){
        return false;
    }

    //store the frequency char in s1 and s2
    for(int i=0;i<s1.length();i++){
        freq[s1[i]-'a']++; //for s1 add
        freq[s2[i]-'a']--; //for s2 substract


    }

    for(int i=0; i<26;i++){
        if(freq[i]!=0){
            return false;
        }
    }
    return true;


}

int main(){
    string s1,s2;
    cin>>s1>>s2;
    int result= isanagram(s1,s2);
    if (result){
        cout<<"strings are anagram";

    }
    else{
        cout<<"strings are not anagram";
    }

    return 0;
    

    


}