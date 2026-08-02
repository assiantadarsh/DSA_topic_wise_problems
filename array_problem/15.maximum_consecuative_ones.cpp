#include<iostream>
using namespace std;

// Que -> Find maximum consecutive 1's ?
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

    int max_count = 0;
    int count = 0;

    for(int i = 0; i < n; i++) {

        if(arr[i] == 1) {
            count++;
            max_count = max(max_count, count);
        }
        else {
            count = 0;
        }
    }

    cout << "Maximum consecutive 1's is : " << max_count;
}