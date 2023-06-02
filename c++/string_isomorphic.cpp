#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool isisomorphic(string s1,string s2){

    //making freq vector
    vector<int>v1(128,-1);
    vector<int>v2(128,-1);

    //check the letter count
    if(s1.length()!=s2.length()){
        return false;
    }

    
    for(int i=0;i<s1.length();i++){
        if(v1[s1[i]]!=v2[s2[i]]){ //for checking index values are same
            return false;
        }
      v1[s1[i]]=v2[s1[i]]=i; //storing the index value at char position


    }
    return true;

    
}

int main(){
    string s1,s2;
    cin>>s1>>s2;

    if(isisomorphic(s1,s2)){
        cout<<"strings are isomorphic";
    }
    else{
        cout<<"strings are  not isomorphic";
    }


    return 0;
}

