#include<iostream>
using namespace std;

// Find the sum of array elements.

int array_sum(int n , int arr[] , int sum , int i){

    if(i > n - 1){
        return sum ;
    }

    sum = sum + arr[i];

    return array_sum(n , arr, sum , i + 1);

}

int main(){

    int n;
    cout<<"Enter number : ";
    cin>>n;

    int arr[n];
    
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }

    int ans = array_sum(n , arr , 0 , 0);

    cout<<"sum = "<<ans;
}