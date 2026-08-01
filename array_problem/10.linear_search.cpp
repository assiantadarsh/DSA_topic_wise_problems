#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    int arr[n];

    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }

    int x;
    cout<<"Enter target : ";
    cin>>x;

    for(int i = 0 ; i < n ; i++){
        if(arr[i] == x){
            cout<<"Target is Found";
            return 0;
        }
    }

    cout<<"Target is not present ";
}