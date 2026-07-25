#include<iostream>
using namespace std;

// Que -> Given an array, determine whether it is sorted in non-decreasing order using recursion.

bool array_sorted(int i , int arr[] , int size){

    if(i >= size - 1){
        return true;
    }

    if(arr[i] > arr[i + 1]){
        return false;
    }

    return array_sorted(i + 1 , arr , size);
}

int main(){

    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    bool ans = array_sorted(0 , arr, n);

    if(ans == 0){
        cout<<"False";
    }

    else{
        cout<<"True";
    }

}
