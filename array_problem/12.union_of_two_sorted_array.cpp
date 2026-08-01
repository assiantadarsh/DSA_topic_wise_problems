#include<iostream>
#include<vector>
using namespace std;

// Union of two sorted arrays

vector<int> sortedarray(vector<int> nums1, vector<int> nums2)
{
    int n1 = nums1.size();
    int n2 = nums2.size();

    vector<int> ans;

    int i = 0;
    int j = 0;

    while(i < n1 && j < n2)
    {
        if(nums1[i] < nums2[j])
        {
            if(ans.empty() || ans.back() != nums1[i])
                ans.push_back(nums1[i]);
            i++;
        }
        else if(nums1[i] > nums2[j])
        {
            if(ans.empty() || ans.back() != nums2[j])
                ans.push_back(nums2[j]);
            j++;
        }
        else
        {
            if(ans.empty() || ans.back() != nums1[i])
                ans.push_back(nums1[i]);

            i++;
            j++;
        }
    }

    while(i < n1)
    {
        if(ans.empty() || ans.back() != nums1[i])
            ans.push_back(nums1[i]);
        i++;
    }

    while(j < n2)
    {
        if(ans.empty() || ans.back() != nums2[j])
            ans.push_back(nums2[j]);
        j++;
    }

    return ans;
}

int main()
{
    int n;
    cout << "Enter the size of the first array : ";
    cin >> n;

    vector<int> arr1(n);

    cout << "Enter the elements of the first sorted array : ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    int m;
    cout << "Enter the size of the second array : ";
    cin >> m;

    vector<int> arr2(m);

    cout << "Enter the elements of the second sorted array : ";
    for(int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    vector<int> ans = sortedarray(arr1, arr2);

    cout << "Union of the two arrays: ";

    for(int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}