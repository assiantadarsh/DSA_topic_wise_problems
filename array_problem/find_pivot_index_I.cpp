#include<iostream>
#include<vector>
using namespace std;

// Brute force approach
// TC -> O(n^2);
// SC -> O(1);

int pivot_index(vector<int> & nums){
    
    int n = nums.size();

    for(int i = 0; i < n; i++){

        int right_sum = 0;
        int left_sum = 0;

        for(int j = 0; j < i; j++){         // Left sum
            left_sum += nums[j];
        }

        for(int k = i + 1; k < n; k++){      // Right sum
            right_sum += nums[k];
        }

        if(right_sum == left_sum){
            return i;
        }

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