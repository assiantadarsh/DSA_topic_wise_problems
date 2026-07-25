#include<iostream>
#include<climits>
using namespace std;

int max_element(int i , int max , int arr[] , int size){
    if(i >= size){

        return max;
    }

    if(max < arr[i]){
        max = arr[i];
    }

    return max_element(i + 1 , max , arr , size);
}

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int maximum = max_element(0, INT_MIN , arr , n);


    for(int i = 0; i < n ; i++){
        cout<<arr[i]<<" ";
    }

    cout<<"Maximum element : "<<maximum;
}
