#include<iostream>
#include<vector>

using namespace std;

// Que -> Pair sum if array is sorted ?

// Tc -> O(n)
// Sc -> O(1)

int main(){

    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int target;
    cout<<"Enter target : ";
    cin>>target;

    int i = 0;
    int j = n - 1;

    vector<int>ans;

    while(i < j){

        int sum = arr[i] + arr[j];

        if(sum == target){
            ans.push_back(i);
            ans.push_back(j);
            break;
        }

        else if(sum > target){
            j--;
        }
        else{
            i++;
        }
    }

    cout<<"Index : "<<ans[0]<<" , "<<ans[1]<<endl;
}