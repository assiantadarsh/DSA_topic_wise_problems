#include<iostream>
#include<vector>
using namespace std;

vector<int> Intersectionarray(vector<int> nums1, vector<int> nums2)
{
    int n1 = nums1.size();  // First array size
    int n2 = nums2.size();  // Second array size

    vector<int> ans;

    int i = 0;
    int j = 0;

    while(i < n1 && j < n2)
    {
        if(nums1[i] == nums2[j])    // Intersection check
        {
            if(ans.empty() || ans.back() != nums1[i]){
                ans.push_back(nums1[i]);
            }  
            i++;
            j++;
        }
        else if(nums1[i] > nums2[j])
        {
            j++;
        }
        else
        {
            i++;
        }
    }
    return ans;
}

int main(){

    int n;  // First array size
    cout << "Enter the size of the first array : "<<endl;
    cin >> n;

    vector<int> arr1(n);

    cout << "Enter the elements of the first sorted array : "<<endl;
    for(int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    int m;  // Second array size
    cout << "Enter the size of the second array : ";
    cin >> m;

    vector<int> arr2(m);

    cout << "Enter the elements of the second sorted array : ";
    for(int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    vector<int> ans = Intersectionarray(arr1, arr2);

    cout << "Intersection of the two arrays: "<<endl;

    for(int x : ans)
    {
        cout << x << " ";
    }

    return 0;

}