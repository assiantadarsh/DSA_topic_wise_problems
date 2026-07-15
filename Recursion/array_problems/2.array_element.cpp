#include<iostream>
using namespace std;

// Print all elements of an array.

void array_element(int n , int arr[] , int i){

    if(i > n - 1){
        return;
    }

    cout<<arr[i]<<" ";

    array_element(n , arr , i + 1);
}
int main(){

    int n;
    cout<<"Enter number : ";
    cin>>n;

    if(n == 0){
        cout<<"Not possible to create 0 array ";
        return 0;
    }

    int arr[n];

    cout<<"Enter array element : \n";

    for(int i = 0; i < n ; i++){
        cin>>arr[i];
    }

    array_element(n , arr , 0);
}