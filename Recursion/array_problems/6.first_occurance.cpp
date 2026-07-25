#include<iostream>
using namespace std;

// Que -> Given an array and a target value, return the index of the first occurrence of the target using recursion.
// If the target is not present, return -1.

//. Time: O(n) (worst case)
//. Space: O(n) (recursive call stack)

int element_exist(int i , int arr[] , int size , int element){

    if(i >= size){
        return -1;
    }

    if(element == arr[i]){
        return i;
    }

    return element_exist(i + 1 , arr , size , element);

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

    int target = element_exist(0 , arr , n , element );

    cout<<"Index : "<<target;
    
}
