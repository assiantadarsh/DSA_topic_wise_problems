#include<iostream>
#include<vector>
using namespace std;

// Optimal approach
// TC -> O(n);
// SC -> O(1);

int pivot_index(vector<int> & nums){
    
    int n = nums.size();
    int total = 0;

    for(int x : nums){
        total += x;
    }

    int left_sum = 0;

    for(int i = 0 ; i < n; i++){

        int right_sum = total - nums[i] - left_sum;

        if(right_sum == left_sum){
            return i;
        }

        left_sum += nums[i];
        
    }
    return -1;
    
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

    int ans = pivot_index(arr); 

   cout<<"Pivot Index : "<<ans;

}