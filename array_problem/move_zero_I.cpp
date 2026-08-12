#include<iostream>
#include<vector>
using namespace std;

// Optimal Approach
// TC -> O(n)
// SC -> O(1)
// Move Zero to the end ?

vector<int> move_zero(vector<int> & nums){
    
    int n = nums.size();
    int j = 0;

    // for(int i = 0; i < n; i++){

    //     if(nums[i] != 0){
    //         nums[j] = nums[i];
    //         j++;
    //     }

    // }

    // for(int i = j; i < n;i++){
    //     nums[j] = 0;
    //     j++;
    // }

    for(int i = 0; i <n; i++){

        if(nums[i] != 0){
            swap(nums[i] , nums[j]);
            j++;
        }
        
    }

    return nums;
    
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

    vector<int> ans = move_zero(arr); 

    for(size_t i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    
    
}