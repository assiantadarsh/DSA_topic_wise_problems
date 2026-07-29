#include<iostream>
using namespace std;

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

    int max = arr[0];

    for(int i = 0; i < n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }

    cout<<"Maximum number is : "<<max;
}