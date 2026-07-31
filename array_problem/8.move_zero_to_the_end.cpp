#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    int arr[n];

    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }

    // Method -> 1

    vector<int>temp;

    for(int i = 0; i < n ; i++){
        if(arr[i] != 0){
            temp.push_back(arr[i]);
        }
    }

    for(size_t i = 0 ; i < temp.size() ; i++){
        arr[i] = temp[i];
    }

    for(int i = temp.size(); i < n; i++){
        arr[i] = 0;
    }
    

    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}