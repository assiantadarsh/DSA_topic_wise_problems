#include<iostream>
using namespace std;

// Method -> 2

int main(){

    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    int arr[n];

    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }

    int i = 0;
    int j = 0;

    while(i < n){

        if(arr[i] != 0){
            swap(arr[i] , arr[j]);
            j++;
        }
        i++;

    }

    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }

}