#include<iostream>
using namespace std;

// check array is arrange in Increasing order ?

int main(){

    int n;
    cout<<"Enter the size of the n : ";
    cin>>n;


    if(n <= 0){
        return 0;
    }
    
    int arr[n];

    for(int i = 0; i < n ; i++){
        cin>>arr[i];
    }

    for(int i = 0 ; i < n - 1 ; i++){
        if(arr[i] > arr[i + 1]){
            cout<<"Not sorted";
            return 0;
        }
    }

    cout<<"Array is sorted";
    
}