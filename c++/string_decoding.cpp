#include<iostream>
#include<vector>
#include <bits/stdc++.h>
#include <string>
using namespace std;

string decodedstring(string s){

    string result = "";

    //traversing the encoded string
    for(int i=0;i<s.length();i++){

        if(s[i]!=']'){
            result.push_back(s[i]);
        }
        else{

            //extract str from result
            string str = "";
            while(!result.empty() && result.back() !='['){
                str.push_back(result.back());
                result.pop_back();
            }
           //reversing the num string 
           reverse(str.begin(),str.end());

            //remove last char from result which is [
                result.pop_back();

            //extract num from result
            string num="";
            while(!result.empty() && (result.back() >=0 && result.back()<='9')){
                num.push_back(result.back());
                result.pop_back();
                 }

             //reversing the sum string
             reverse(num.begin(),num.end());

            //connect string to integer
            int int_num = stoi(num);    

            //  inserting str in result int_num times
            while(int_num){
                result += str;
                int_num--;

            }
        }

    }
    return result;
}

int main()
{
    string str;
    cin>>str;

    cout<<decodedstring(str)<<endl;

    return 0;
}