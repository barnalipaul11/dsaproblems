#include<iostream>
#include<vector>
using namespace std ;
#include<limits.h>


int maximumonerows(vector<vector<int>>&v){

        int maxones = INT_MIN;
        int maxonerows = -1;
        int column = v[0].size();

        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[i].size();j++){
                if(v[i][j]==1){
                    int numberones=column - j  ;
                    if(numberones > maxones){
                        maxones = numberones;
                        maxonerows=i;
                    }
                }
            }
        }

    return maxonerows;


}

int main() {

    int n , m;
    cin>>n>>m;

    vector<vector<int>>vec(n,vector<int>(m));

    for (int i = 0 ;i<n ;i++){
        for (int j =0 ; j <m ; j++){
            cin>>vec[i][j];
        }
    }

    int ans = maximumonerows(vec);
    cout<<ans;

    return 0;

}



