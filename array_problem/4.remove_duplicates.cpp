#include<iostream>
#include<vector>
using namespace std;

// Que -> Remove duplicates from sorted array ?

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

    vector<int>temp(n);

    // Method -> 1

    // for(int i = 0 ; i < n - 1; i++){
    //     if(arr[i] != arr[i + 1]){
    //         temp.push_back(arr[i]);
    //     }
    // }

    // temp.push_back(arr[n -1]);

    // for(size_t i = 0; i < temp.size(); i++){
    //     cout<<temp[i]<<" ";
    // }

    // Method -> 2

    int i = 0;

    for(int j = 1; j < n; j++){

        if(arr[i] != arr[j]){
            arr[i + 1] = arr[j];
            i++;
        }
        
    }

    for(int j = 0 ; j <= i ; j++){
        cout<<arr[j]<<" ";
    }

}