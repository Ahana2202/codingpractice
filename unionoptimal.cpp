#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> getUnion(vector<int>& arr1, vector<int>& arr2) {
        int a = arr1.size();
        int b = arr2.size();
        int i = 0, j = 0;
        vector<int> ans;
        while (i < a && j < b) {
            if (arr1[i] <= arr2[j]) {
                if (ans.empty() || ans.back() != arr1[i]) {
                    ans.push_back(arr1[i]);
                }
                i++;
            } else {
                if (ans.empty() || ans.back() != arr2[j]) {
                    ans.push_back(arr2[j]);
                }
                j++;
            }
        }
        while (i < a) {
            if (ans.empty() || ans.back() != arr1[i]) {
                ans.push_back(arr1[i]);
            }
            i++;
        }
        while (j < b) {
            if (ans.empty() || ans.back() != arr2[j]) {
                ans.push_back(arr2[j]);
            }
            j++;
        }
        return ans;
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

