#include<iostream>
#include<vector>
using namespace std;

// . Time Complexity: O(n × k) (Worst case: O(n²))
// . Space Complexity: O(1)

// Que -> Rotate array left by k places .

void rotate(int nums[] , int size){
    for(int i = 0 ; i < size - 1; i++){
        swap(nums[i] , nums[i + 1]);
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
    

    for(int i = 1 ; i <= k ; i++){
        rotate(arr , n);
    }

    cout<<"\nAfter Left rotation "<<endl;

    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }

}