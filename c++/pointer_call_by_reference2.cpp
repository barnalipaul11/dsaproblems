#include<iostream>
using namespace std;

void position(string s, char ch, int *firsta ,int *lasta){

    for (int i=0 ; i<s.size();i++){
        if(s[i]==ch){
            *firsta =i;
            break;
        }
    }

    for (int i=s.size()-1; i>=0 ;i ++){
        if(s[i]==ch){
            *lasta =i;
            break;
        }
    }

}


int main(){
     
     string s="aaabcad";
     char ch = 'a';
     int firsta = -1;
     int lasta = -1;
     int *ptr1= &firsta;
     int *ptr2= &lasta;
     position(s,ch, ptr1, ptr2);

     cout<<firsta<<" "<<lasta;

     return 0;
}

