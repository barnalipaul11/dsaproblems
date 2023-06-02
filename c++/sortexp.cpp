// #include <iostream>
// #include <climits>
// using namespace std;

// int partition(int arr[], int first, int last) {
//     int pivot = arr[last];
//     int i = first;
//     for (int j = first; j <= last - 1; j++) {
//         if (arr[j] < pivot) {
//             swap(arr[i], arr[j]);
//             i++;
//         }
//     }
//     swap(arr[i], arr[last]);
//     return i;
// }

// int kthsmallest(int arr[], int first, int last, int k) {
//     if (k <= 0 || k > last - first + 1) {
//         return INT_MIN;
//     }
//     int pos = partition(arr, first, last);
//     if (pos - first == k - 1) {
//         return arr[pos];
//     } else if (pos - first > k - 1) {
//         return kthsmallest(arr, first, pos - 1, k);
//     } else {
//         return kthsmallest(arr, pos + 1, last, k - (pos - first + 1));
//     }
// }

// int main() {
//     int arr[] = {3, 5, 4, 9, 6};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int k = 3;
//     cout << kthsmallest(arr, 0, n - 1, k);
//     return 0;
// }


#include<iostream>
#include<climits>
using namespace std;

int partition(int arr[], int first,int last){

    int pivot=arr[last];

    int i=first;
    
    for(int j=first;j<=last-1;j++ ){
        if (arr[j]<pivot){
            
            swap(arr[i],arr[j]);
            i++;

        }
        
    }
    swap(arr[i],arr[last]);

    return i;

}

int  kthsmallest(int arr[],int first,int last,int k){
    
    if (k>0 && k<=last -first+1){

        int pos=partition(arr,first,last); //position of pivot element
       
        if(pos-first==k-1){
            return arr[pos];
        }
        else if(pos-first > k-1){
            return kthsmallest(arr,first,pos-1,k);
        }
        else return kthsmallest(arr,pos+1,last,k-pos+first-1);

    }
    return INT_MIN;
}

int main(){

    int arr[]={3,5,4,9,6};
    int n= sizeof(arr)/sizeof(arr[0]);
    int k = 3;

    cout<<kthsmallest(arr,0,n-1,k);

   
   return 0;
}

