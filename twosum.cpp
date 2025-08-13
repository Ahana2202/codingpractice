#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
 //2 sum to tell whether there is an element in the array which is equal to the target sum
 class Solution {
public:

    bool twosum (vector <int>&arr, int target)
    {
        int n=arr.size();
    //     //brute force approach
    //     for (int i=0;i<n;i++)
    //     {
    //         for (int j=0;j <n;j++)
    //     {
    //         if (i==j)
    //         continue; //to avoid same element
    //         if (arr[i]+arr[j]==target)
    //         {
    //             return true; //if the sum of two elements is equal to target
    //         }
    //     }
    // }
    // return false; //if no such elements found


    // //better approach 
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=i+1;j<n;j++)
    //     {
    //         if (arr[i]+arr[j]==target)
    //         {
    //             return true; //if the sum of two elements is equal to target
    //         }
    //     }
    // }
    // return false; //if no such elements found

    //optimal approach using hashing
    map <int, int> m; //to store the elements and their indices
    for (int i=0;i<n;i++)
    {
        int c=target - arr[i]; //complement of the current element
        if (m.find (c)!= m.end()) //if the complement is found in the map
        {
            return true; //if the sum of two elements is equal to target
        }
        m[arr[i]] = i; //store the current element and its index in the map
    }
 return false;
}
};
int main ()
{
    vector <int> v;
    int n,target;
    cout << "enter the size of the array" << endl;
    cin >> n;
    cout << "enter the elements of the array" << endl;
    for (int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << "enter the target sum" << endl;
    cin >> target;
    Solution obj;
    if (obj.twosum(v,target))
    {
        cout << "Yes, there are two elements in the array whose sum is equal to the target." << endl;
    }
    else
    {
        cout << "No, there are no two elements in the array whose sum is equal to the target." << endl;
    }
}