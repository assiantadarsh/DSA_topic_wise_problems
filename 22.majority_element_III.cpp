#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Que -> Find majority element ?

// Moore's voting algorithm ....

// TC -> O(nlogn)
// SC -> O(1)

int majority_element(vector<int>nums){

    int n = nums.size();

    int ans = nums[0];

    int count = 0;

    for(int i = 0; i < n ; i++){

        if(count == 0) {
            ans = nums[i];
        }

        if(ans == nums[i]){
            count++;
        }

        else{
            count--;
        }
    }

    return ans;

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