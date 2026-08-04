#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Que -> Find majority element ?

// TC -> O(nlogn)
// SC -> O(1)

int majority_element(vector<int>nums){

    int n = nums.size();

    sort(nums.begin() , nums.end());

    int count = 1;

    int ans = nums[0];

    for(int i = 1; i < n ; i++){

        if(nums[i - 1] == nums[i]) count++;

        else{
            count = 1;
            ans = nums[i];
        }

        if(count > n / 2){
            return ans;
        }
    }

    return -1;

}

int main(){

    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    vector<int>arr(n);

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int ans = majority_element(arr);

    cout<<"Majority Element is : "<<ans;
    
}