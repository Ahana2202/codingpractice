#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
    //optimal of max consecutive ones in a binary array
    int maxconsecutive(vector <int> &arr)
    {
        int n=arr.size();
        if (n == 0) return 0; // Handle empty array case
        int ctr=0;
        int imax=0;
        for (int i=0;i<n;i++)
        {
            if (arr[i]==1)
            {
                ctr++;
                imax = max (ctr, imax); // Update max if current count is greater
            }
            else {
                ctr=0; // Reset count if current element is not 1
            }
        }
        return imax; // Return the maximum count of consecutive ones
    }
};
int main() {
    Solution sol;
    vector<int> arr ;
    int n;
    
    cout << "Enter the size of the array: ";
    cin >> n;
    arr.resize(n);
    cout << "Enter the elements of the array (0s and 1s only): ";
    for (int i = 0; i < n; i++) {
        {
            cout << "Element " << i + 1 << ": ";
            cin >> arr[i];
        }
    }
    int result = sol.maxconsecutive(arr);
    cout << "Maximum consecutive ones: " << result << endl; // Output the result
    return 0;
}