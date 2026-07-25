#include<iostream>
using namespace std;

// Que -> Given an array and a target value, determine whether the target exists in the array using recursion.

//. Time: O(n) (worst case)
//. Space: O(n) (recursive call stack)

bool element_exist(int i , int arr[] , int size , int element){

    if(i >= size){
        return false;
    }

    if(element == arr[i]){
        return true;
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

    bool target = element_exist(0 , arr , n , element );

    if(target == 1){
        cout<<"Target exist";
    }

    else{
        cout<<"Target not exist ";
    }
}
