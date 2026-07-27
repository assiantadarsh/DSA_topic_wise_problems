#include<iostream>
#include<vector>
using namespace std;

void indexes(int i , int arr[] , int size , int element , vector<int> &ans){

    
    if(i >= size){
        return;
    }

    if(arr[i] == element){
        ans.push_back(i);
    }

    indexes(i + 1 , arr , size , element , ans);

}
int main(){

    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int element;
    cout<<"Enter Target : ";
    cin>>element;

    vector<int>ans;

    indexes( 0 , arr , n , element , ans);

    if(ans.size() < 1){
        cout<<"Element is not found";
    }

    else{
        for(size_t i = 0 ; i < ans.size() ; i++){
            cout<<ans[i]<<" ";
        }
    }

}
