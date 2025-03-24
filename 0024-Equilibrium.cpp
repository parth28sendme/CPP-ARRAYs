//Given a sequence arr[ ] of size n, Write a function int equilibrium(int[] arr, int n) that returns an equilibrium index (if any) or -1 if no equilibrium index exists.

//The equilibrium index of an array is an index such that the sum of elements at lower indexes is equal to the sum of elements at higher indexes. 

#include <iostream>
using namespace std ; 

bool equilibrium(int arr[] , int n ){

    int sum = 0;
    int tempSum = 0;

    for(int i = 0 ; i< n ; i++){
    sum += arr[i]; 
    }

    for(int i = 0 ; i<n ; i++){
    
        sum -= arr[i];

        if(sum == tempSum){
            return true;
        }

        tempSum += arr[i];
    }

    return false;


}



int main(){

    int array[] = { 3,4,8,-9,9,7 };
    int n = sizeof(array) / sizeof(array[0]);
    int k = 3;

    int result = 0;

    result = equilibrium(array,n);

    if(result == 1){
        cout << "Equilibrium Present" << "\n"  << endl;
    }
    

    if(result == 0){
        cout << "Equilibrium Not Present" << "\n" << endl;
    }

    return 0;
}