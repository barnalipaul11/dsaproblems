#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
using namespace std;

string longestcommonprefix(vector<string>&str){

    //sorting the arrays of strings
    sort(str.begin(),str.end());

   string str1= str[0]; //1st element
   string str2= str[str.size()-1]; //last element
   int i=0;int j=0;

    string ans="";
    while (i<str1.size() && j<str2.size()){
        if(str1[i]==str2[j]){
            ans+=str1[i];
            i++;j++;
        }
        else{
            break;
        }

    }
    return ans;

}


int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    cout<<"enter strings"<<endl;
    vector<string>str(n);
    
    for(int i=0;i<str.size();i++){
        cin>>str[i];
    }

    cout<<"longest common prefix "<<longestcommonprefix(str);

    return 0;


}

