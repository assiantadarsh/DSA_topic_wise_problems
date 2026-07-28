#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& arr, int start, int mid, int end)
{
    vector<int> temp;

    int i = start;
    int j = mid + 1;

    while(i <= mid && j <= end)
    {
        if(arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }

    while(j <= end)
    {
        temp.push_back(arr[j]);
        j++;
    }

    for(size_t k = 0; k < temp.size(); k++)
    {
        arr[start + k] = temp[k];
    }
}

void mergeSort(vector<int>&arr , int start , int end){

    if(start < end){

        int mid = start + (end - start)/2;

        mergeSort(arr , start , mid);
        mergeSort(arr , mid + 1 , end);
        merge(arr , start , mid , end);
    }
}

int main(){

    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    vector<int>arr(n);

    cout<<"Enter array element : "<<endl;

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    cout<<"\nOriginal array : "<<endl;

    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }

    cout<<"\nAfter sorting\n"<<endl;

    mergeSort(arr , 0 , n - 1);

    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }

}