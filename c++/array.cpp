#include<iostream>
using namespace std;

 int pos(int A[], int B[], int N) {
         //code here
         int ans = 0;
         for (int i =0;i<N;i++){
             for (int j=0;j <N;j++){
                if(A[i]=B[j]){                    ans=1;
                 }
             }
     }
     return ans;
   }



  int main(){
    int n=3;
    int A[]={1,4,5};
    int B[]={5,1,4};
    

    int output= pos(A,B,n);
    cout<<output;

    return 0;


  }
