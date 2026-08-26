#include<iostream>
#include<vector>
using namespace std;

// Find peak Element ?
// TC -> O(logn)
// SC -> O(1)
// Optimal Approach 

 int search(vector<int>& nums) {

    int i = 0;
    int j = nums.size() - 1;

    while(i < j) {

        int mid = i + (j - i) / 2;

        if(nums[mid] < nums[mid + 1]) {
            i = mid + 1;
        }
        else {
            j = mid;
        }
    }

    return i;
 }


int main(){

    int n;
    cout<<"Enter n : ";
    cin>>n;

    vector<int>arr(n);

    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }

    int ans = search(arr);

    cout<<"Peak Element  : "<<ans<<" at index";

}