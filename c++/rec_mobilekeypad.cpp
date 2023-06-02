#include<iostream>
#include<vector>
using namespace std;

void f(string &str, int i, string result, vector<string>&li, vector<string> &v){
    //base case
    if(i==str.size()){
        li.push_back(result);
        return;
    }
    int digit=str[i]-'0'; //let 23-0th index
    if (digit <= 1){
        f(str,i,result,li,v);
    }
    for(int j=0; j<v[digit].size() ;j++){   //for extract the 2index letters
         f(str,i,result+v[digit][i],li,v);
    }
    return;
}

int main(){
    vector<string>v(10);
    v = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    string str="23";
    vector<string>li;
    f(str,0,"", li ,v);
    for(int i=0; i<li.size();i++){
        cout<<li[i]<<" ";

    }
  return 0;
}
