#include<iostream>
#include<vector>
#include<set>

using namespace std;
int main(){

    int n;
    cout<<"Enter the size of the first array : ";
    cin>>n;

    int arr1[n];

    for(int i = 0 ; i < n ; i++){
        cin>>arr1[i];
    }

    int m;
    cout<<"Enter the size of the second array : ";
    cin>>m;

    int arr2[m];

    for(int i = 0 ; i < m ; i++){
        cin>>arr2[i];
    }

    set<int>st;

    for(int i = 0 ; i < n ; i++){
        st.insert(arr1[i]);
    }
   
    for(int j = 0; j < m ; j++){
        st.insert(arr2[j]);
    }
    
    vector<int>temp(st.size());
    int i = 0;

    for(auto it : st){
        temp[i++] = it;
    }

    for(size_t i = 0 ; i < temp.size(); i++){
        cout<<temp[i]<<" ";
    }

}