#include<iostream>
using namespace std;

// Que -> Longest subarray sum with k if all elements are positive ?

int main(){

    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int k;
    cout<<"Enter k : ";
    cin>>k;

    int len = 0;

    for(int i = 0; i < n; i++){
        int sum = 0;

        for(int j = i; j < n; j++){

            sum += arr[j];

            if(sum == k){
                len = max(len , j - i + 1);
            }
        }
    }

    cout<<"Subarray maximum length : "<<len;
}