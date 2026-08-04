#include<iostream>
#include<vector>
using namespace std;

// Que -> Find majority element ?

// TC -> O(n^2)
// SC -> O(1)

int majority_element(vector<int>nums){

    int n = nums.size();

    for(int i = 0 ; i < n ; i++){

        int count = 0;
        bool isvisited = false;

        for(int k = 0; k < i; k++){

            if(nums[i] == nums[k]){
                isvisited = true;
                break;
            }
        }

        if(isvisited) continue;

        else{
            for(int j = i ; j < n ; j++){
                if(nums[i] == nums[j]) count++;
            }
        }

        if(count > n / 2) return nums[i];

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