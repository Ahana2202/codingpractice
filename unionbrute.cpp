#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
   vector<int> getUnion(vector<int> &arr1, vector<int> &arr2)
{
    set<int> s;
    int a = arr1.size();
    int b = arr2.size();
    for (int i = 0; i < a; i++)
    {
        s.insert(arr1[i]);
    }
    for (int i = 0; i < b; i++)
    {
        s.insert(arr2[i]);
    }
    vector<int> temp;
    for (auto it : s)
    {
        temp.push_back(it);
    }
    return temp;
}

   
};
int main ()
{
    vector <int> arr1, arr2;
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
    vector<int> result = sol.getUnion(arr1, arr2);

    cout << "Union of the two arrays: ";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
    
    return 0;
}