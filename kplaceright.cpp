#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
    void kplace(vector<int> &arr, int k) {
        int n = arr.size();
        k = k % n; // Handle cases where k >= n
        vector<int> temp(k);

        for (int i=0;i<k;i++)
        {
            temp[i]=arr[n-k+i];
        }
        for (int i=n-k-1;i>=0;i--)
        {
            arr[i+k] = arr[i];
        }
        for (int i=0;i<k;i++)
        {
            arr[i] = temp[i];
        }
    }
};
int main    ()
{
    vector<int> v;
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;
    v.resize(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> v[i];
    }
    cout << "Input the number of positions to rotate: ";
    cin >> k;

    Solution sol;
    sol.kplace(v, k);

    cout << "Array after rotation: ";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}