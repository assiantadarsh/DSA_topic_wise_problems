#include<iostream>
#include<vector>
using namespace std;

// Better approach
// TC -> O(n);
// SC -> O(n);

int pivot_index(vector<int> & nums){
    
    int n = nums.size();

    vector<int>ans(n);

    ans[0] = 0;

    // Left sum/prefix sum 

    for(int i = 1; i < n;i++){
        ans[i] = ans[i - 1] + nums[i - 1];
    }

    int right = 0;

    if(ans[n - 1] == right){
        return n -1;
    }

    // Right sum / suffix sum 

    for(int j = n - 2; j >= 0; j--){

        right += nums[j + 1];

        if(ans[j] == right){
            return j;
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