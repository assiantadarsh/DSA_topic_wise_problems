#include<iostream>
#include<climits>
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

    int max = INT_MIN;
    int sec_max = INT_MIN;

    for(int i = 0; i < n; i++){

        if(max < arr[i]){
            sec_max = max;
            max = arr[i];
        }

        else if(sec_max < arr[i] && max != arr[i]){
            sec_max = arr[i];
        }
    }

    if(sec_max == INT_MIN){
        cout<<"Second maximum not present";
    }
    else{
        cout<<"Second max : "<<sec_max;
    }

}