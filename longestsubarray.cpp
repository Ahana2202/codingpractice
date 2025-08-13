//longest subarray with sum k (positive integers)
//subarray- contiguous or continuous part of an array

#include <iostream>
#include <vector>
using namespace std;
#include <map> // Include map for storing cumulative sums and their indices

class Solution {
public:
int longestsubarray (vector <int>&arr,long long k)
{
    map<long long, int> mp; 
    long long sum = 0; 
    int maxLength = 0;

    for (int i=0;i<arr.size();i++)
    {
        sum+= arr[i]; 
        if (sum == k) {
            maxLength = i + 1;
        }
        long long rem=sum-k;
        if (mp.find(rem) != mp.end()) {
            int l=i-mp[rem]; 
            maxLength = max(maxLength, l);
        }
        mp[sum] = i;
    }
    return maxLength;
}
};
int main()
{
    vector<int> arr;
    int n;
    long long k;
    cout << "Enter the size of the array: ";
    cin >> n;
    arr.resize(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Enter the value of k: ";
    cin >> k;

    Solution sol;
    int result = sol.longestsubarray(arr, k);
    cout << "The length of the longest subarray with sum " << k << " is: " << result << endl;

    return 0;
}