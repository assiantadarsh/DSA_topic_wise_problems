#include<iostream>
using namespace std;

// Que -> Rotate array left by one .

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    int arr[n];

    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }

    int temp = arr[0];

    for(int i = 1; i < n ; i++){
        arr[i -1 ] = arr[i];
    }
    arr[n - 1] = temp;

    cout<<"\nLeft rotate by one "<<endl;

    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }

}