//Our Task: Given a binary array, we need to convert this array into an array that either contains all 1s or all 0s.  We need to do it using the minimum number of group flips. 


#include <iostream>
using namespace std;

int minFlips(int arr[], int n ){

for(int i = 1 ; i<n ; i++){

    if( arr[i] != arr[i-1]){
        
        if(arr[i] != arr[0]){
            cout << "From " << i << " To ";
        }else{
            cout << i-1 << endl;
        }
    }
}
if (arr[n - 1] != arr[0])
        cout << (n - 1) << endl;

 return 0;
}


int main(){
     int array[] = { 0, 1, 1, 0, 0, 0, 1, 1 };
    int n = sizeof(array) / sizeof(array[0]);
    minFlips(array,n);
    return 0;
}