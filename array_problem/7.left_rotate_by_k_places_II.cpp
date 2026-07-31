#include<iostream>
#include<vector>
using namespace std;

// .Time Complexity: O(n)
// .Space Complexity: O(1)

// Que -> Rotate array left by k places .

void rotate(int nums[] , int start , int end){
    int i = start;
    int j = end - 1;

    while(i < j){
        swap(nums[i] , nums[j]);
        i++;
        j--;
    }

}

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    int arr[n];

    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }

    int k;
    cout<<"\nEnter the value of k : ";
    cin>>k;

    if(k > n){
        k = k % n;
    }

    if(k == n || k == 0){
        for(int i = 0 ; i < n ; i++){
            cout<<arr[i]<<" ";
        }
        return 0;
    }

    rotate(arr,0, n);
    rotate(arr , n-k, n);
    rotate(arr ,0, n-k);
    

    cout<<"\nAfter Left rotation "<<endl;

    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }

}