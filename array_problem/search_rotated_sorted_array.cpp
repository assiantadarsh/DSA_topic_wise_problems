#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>& nums, int target) {

    int i = 0;
    int j = nums.size() - 1;

    while(i <= j) {

        int mid = i + (j - i) / 2;

        if(nums[mid] == target) {
            return mid;
        }

        // Left half is sorted
        if(nums[i] <= nums[mid]) {

            if(nums[i] <= target && target < nums[mid]) {
                j = mid - 1;
            }
            else {
                i = mid + 1;
            }
        }

        // Right half is sorted
        else {

            if(nums[mid] < target && target <= nums[j]) {
                i = mid + 1;
            }
            else {
                j = mid - 1;
            }
        }
    }

    return -1;
}

int main(){

    int n;
    cout<<"Enter n : ";
    cin>>n;

    vector<int>arr(n);

    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }

    int target;
    cout<<"\nEnter target : ";
    cin>>target;

    int ans = search(arr , target);

    cout<<"Target exist in : "<<ans<<" index";

}