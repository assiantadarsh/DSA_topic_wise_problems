#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    if(n <= 0){
        cout<<"Not possible";
        return 0;
    }
    int arr[n];
    cout<<"Enter element : ";

    for(int i = 0; i < n ; i++){
        cin>>arr[i];
    }

    cout<<"\nOriginal array  : ";

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // Bubble sort

    for(int i = 0; i < n; i++){
        bool issort = true;

        for(int j = 0; j < n - 1 - i; j++){

            if(arr[j] > arr[j + 1]){
                swap(arr[j] , arr[j + 1]);
                issort = false;
            }
        }

        if(issort){
            break;
        }
    }
    cout<<"\nAfter Sorting : ";

    for(int i = 0; i < n ; i++){
        cout<<arr[i]<<" ";
    }


}