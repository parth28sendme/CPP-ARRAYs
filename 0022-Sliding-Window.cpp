//Given an array of integers of size 'n'. Our aim is to calculate the maximum sum of 'k' consecutive elements in the array.



#include <iostream>
using namespace std ;


int slidingWindow(int arr[], int n , int k){
int currentMax = 0;
for(int i =0 ; i<k ; i++){
currentMax = currentMax + arr[i];
}

int MainMax = currentMax;

for(int i=k ; i < n ; i++){
    currentMax = currentMax + arr[i] -arr[i-k];
    MainMax = max(MainMax, currentMax);
}

return MainMax;
}


int main(){

    int array[] = { 1, 8, 30, -5, 20, 7 };
    int n = sizeof(array) / sizeof(array[0]);
    int k = 3;

    int result = 0;
    result = slidingWindow(array,n,k);

    cout << result << endl;




    return 0;
} 