#include<iostream>
#include<vector>
using namespace std;

// Optimal Approach
// TC -> O(n)
// SC -> O(1)
// Find the best time to sell the stock ?

int max_profit(vector<int> & nums){
    
    int n = nums.size();

    int max_profit = 0;
    int buy = nums[0];

    for(int i = 1; i < n; i++){

        buy = min(buy , nums[i]);

        int rate = nums[i] - buy;
        
        max_profit = max(max_profit , rate);
        
    }
    
    return max_profit;
    
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

    int ans = max_profit(arr); 

    cout<<"Maximum profit : "<<ans;
    
}