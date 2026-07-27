#include<iostream>
#include<climits>
using namespace std;

// ✅ Time Complexity: O(n)
// ✅ Space Complexity: O(n)

int minim_number(int i , int arr[] , int size , int minimum){

    if(i >= size){
        return minimum;
    }

    if(minimum > arr[i]){
        minimum = arr[i];
    }

    return minim_number(i + 1 , arr , size , minimum);

}


int main(){

    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int ans = minim_number(0 , arr , n , INT_MAX);

    if(ans == INT_MAX){
        cout<<"Minimum number does not exist";
    }

    else{
        cout<<"Minimum number : "<<ans;
    }
}
