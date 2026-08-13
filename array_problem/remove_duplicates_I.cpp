#include<iostream>
#include<vector>
using namespace std;

// Optimal Approach
// TC -> O(n)
// SC -> O(1)
// Remove Duplicates if array is sorted?

int remove_duplicates(vector<int> & nums){
    
    int n = nums.size();
    int j = 0;

    for(int i = 1; i < n; i++){

        if(nums[j] != nums[i]){
           j++;
           nums[j] = nums[i];
        }  
    }

    return j + 1;
    
}

int main(){

    int n;
    cout<<"Enter n : ";
    cin>>n;

    if(n <= 0){
        cout<<"Not Possible";
        return 0;
    }

    vector<int>arr(n);

    cout<<"Enter array elements : ";

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int ans = remove_duplicates(arr); 

    cout<<"Unique element : "<<ans<<endl;

    for(int i = 0 ; i < ans; i++){
        cout<<arr[i]<<" ";
    }
    
    
}