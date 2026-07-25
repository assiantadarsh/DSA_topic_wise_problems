#include<iostream>
using namespace std;

// Given an array and a target element, return the index of its last occurrence using recursion.

// If the element is not present, return -1.

//. Time: O(n) (worst case)
//. Space: O(n) (recursive call stack)

int element_exist(int i , int arr[] , int element){

    if(i < 0){
        return -1;
    }

    if(element == arr[i]){
        return i;
    }

    return element_exist(i - 1 , arr, element);

}
int main(){

    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int element;
    cout<<"Enter Target : ";
    cin>>element;

    int target = element_exist(n - 1 , arr , element );

    cout<<"Index : "<<target;
    
}
