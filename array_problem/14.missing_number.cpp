#include<iostream>
using namespace std;

// Que -> Find missing number from 1 To n ?

// Tc -> o(n)
// Sc -> o(n)

int main(){

    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // Hash array of size n+2 because numbers are from 1 to n+1
    int hash[n + 2] = {0};

    // Mark the numbers present
    for(int i = 0; i < n; i++){
        hash[arr[i]] = 1;
    }

    // Find missing number
    for(int i = 1; i <= n + 1; i++){
        if(hash[i] == 0){
            cout << "Missing number : " << i;
            return 0;
        }
    }
}