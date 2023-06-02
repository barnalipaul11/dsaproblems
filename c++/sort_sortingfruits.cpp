#include<iostream>
#include<string.h>
using namespace std;


void sortthefruits(char fruit[][60], int n){

    for(int i=0;i<n-1;i++){

        //finiding minimum element
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(strcmp(fruit[min_index], fruit[j] )>0){
                min_index=j;
                 }
            
        }

        ////place the main element
        if (i!=min_index){
            swap(fruit[i],fruit[min_index]);
        }
    }



}

int main(){
    char fruit[][60]= {"papaya","lime","apple","mango","kiwi"};
     int n=sizeof(fruit)/sizeof(fruit[0]);

    sortthefruits(fruit,n);

    for(int i=0; i<n;i++){
        cout<<fruit[i]<<" ";

    }
    return 0;
}