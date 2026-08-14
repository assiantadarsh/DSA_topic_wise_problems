#include<iostream>
#include<vector>
using namespace std;


// Find target index if array is sorted in non decreasing order ?
// Recursive order 

int binary(vector<int>& nums , int target , int st , int end){

    // int n = nums.size();

    if(st > end){
        return -1;
    }

    int mid = st + (end - st)/2;

    if(nums[mid] == target){
        return mid;
    }
    
    else if(nums[mid] > target){
        end = mid -1 ;
    }

    else{
        st = mid + 1;
    }

    return binary(nums , target , st , end);
}

int main(){

    int n;
    cout<<"Enter n : ";
    cin>>n;

    if(n <= 0){
        cout<<"Not possible";
        return 0;
    }

    vector<int>arr(n);

    for(int i = 0; i < n; i++){

        cin>>arr[i];
    }
    int target;
    cout<<"Enter target : ";
    cin>>target;

    int ans = binary(arr, target , 0 , n - 1);

   if(ans == -1)
    cout << "Target not found";
   else
      cout << "Target found at index: " << ans;
}