#include <iostream>
#include <vector>
using namespace std;
//intersection of two sorted arrays
//using two pointer approach
class Solution{
    public:
    vector <int> intersection (vector <int>&arr1, vector <int>&arr2)
    {
        int a = arr1.size();
        int b = arr2.size();
        int i = 0, j = 0;
        vector<int> ans;
        while (i < a && j < b) {
            if (arr1[i]<arr2[j])
            {
                i++;

            }
            else if (arr2[j]<arr1[i])
            {
                j++;
            }
            else if (arr1[i] == arr2[j])
            {
                ans.push_back(arr1[i]);
                i++;
                j++;
            }
        }
        return ans;
    }
};
int main ()
{
    vector <int>arr1, arr2;
    int n1, n2;
    cout << "Enter the size of the first array: ";
    cin >> n1;
    arr1.resize(n1);
    for (int i = 0; i < n1; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr1[i];
    }
    cout << "Enter the size of the second array: ";
    cin >> n2;
    arr2.resize(n2);
    for (int i = 0; i < n2; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr2[i];
    }
    Solution sol;
    vector <int> result= sol.intersection(arr1, arr2);
    cout << "Intersection of the two arrays: ";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
}