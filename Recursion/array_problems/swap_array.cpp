#include<iostream>
using namespace std;

// Method -> 1

// void rev(int i , int n , int arr[]){

//     if(i >= n/2){
//         return;
//     }
//     swap(arr[i], arr[n - i - 1]);

//     rev(i + 1 ,n , arr);
// }


// Method -> 2

void rev(int i , int j, int arr[]){

    if(i >= j){
        return;
    }

    swap(arr[i], arr[j]);
    rev(i + 1, j - 1, arr);
}

int main(){


    int n;
    cout<<"Enter n : ";
    cin>>n;

    int arr[n];

    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }

    rev(0 , n - 1 , arr);

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}