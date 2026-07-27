#include<iostream>
using namespace std;

// Que -> Count Occurrences of an Element ?


int count_occurance(int i , int arr[] , int element , int size , int count){

    if(i >= size){
        return count;
    }

    if(arr[i] == element){
        count++;
    }

    return count_occurance(i + 1 , arr , element , size , count);

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

   int ans = count_occurance(0 , arr , element , n , 0);

   cout<<"Answer : "<<ans;
    
}
