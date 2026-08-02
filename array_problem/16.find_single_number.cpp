#include<iostream>
using namespace std;

// Que -> Find the number that appears once and other twice ?
// TC -> O(n)
// SC -> O(1)

int main() {

    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int Xor = 0;

    for(int i = 0; i < n ; i++){

        Xor = Xor ^ arr[i];

    }

    cout<<"Single number : "<<Xor;
}