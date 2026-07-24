#include<iostream>
using namespace std;
int main(){

    int n; 

    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int hash[13] = {0};

    for(int i = 0; i < n; i++){
        hash[arr[i]]++;
    }

    int q;
    cout<<"Enter q : ";
    cin>>q;

    while(q > 0){
        int number;
        cout<<"Enter num : ";
        cin>>number;

        cout<<hash[number]<<endl;
        q--;
    }
}
