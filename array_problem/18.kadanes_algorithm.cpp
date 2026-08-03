#include<iostream>
#include<limits.h>
using namespace std;

// Que -> Maximum subarray sum ?

// Tc -> O(n)
// Sc -> O(1)

int main(){

    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int current_sum = 0;
    int max_sum = INT_MIN;

    for(int i = 0 ; i < n ; i++){

        current_sum += arr[i];
        max_sum = max(max_sum , current_sum);

        if(current_sum < 0){
            current_sum = 0;
        }
    }

    cout<<"Maximum subarray sum : "<<max_sum;

}