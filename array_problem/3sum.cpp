#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Better approach
// TC -> O(n^2);
// SC -> O(1);

void product(vector<int> & nums){
    
    int n = nums.size();

    sort(nums.begin() , nums.end());

    for(int i = 0; i < n - 2; i++){

        if(i > 0 && nums[i] == nums[ i - 1]){
            continue;
        }

        int l = i + 1;
        int r = n - 1;

        while(l < r){

            int sum = nums[i] + nums[l] + nums[r];

            if(0 == sum){
                cout<<"\n"<<nums[i]<<","<<nums[l]<<","<<nums[r]<<endl;

                while(l < r && nums[l + 1] == nums[l]){
                l++;
                }

                while(l < r && nums[r - 1] == nums[r]){
                r--;
                }

                l++;
                r--;
            }

            else if(sum < 0){
                l++;
            }

            else{
                r--;
            }
        }
    }
}

int main(){

    int n;
    cout<<"Enter n : ";
    cin>>n;

    vector<int>arr(n);

    cout<<"Enter array elements : ";

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    product(arr); 

}