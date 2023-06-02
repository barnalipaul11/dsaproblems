#include<iostream>
#include<vector>
using namespace std;

void sortarray(vector<int> &v){

    int n=v.size();

    for (int i=0; i<n-1;i++){
        bool flag =false;
        for(int j=0; j<n-1-i; j++){
            if(v[j]>v[j+1]){
                flag=true;
                swap(v[j],v[j+1]);
            }
            
    }
    if(!flag)break;
         
        
     }
     return;
}

int main(){

    int n;
    cout<<"Enter vector size : ";
    cin>>n;

    vector<int>v(n);

    for(int i=0; i<n;i++){
        cin>>v[i];
    }

    sortarray(v);

    for(int i=0; i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}

