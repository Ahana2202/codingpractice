#include <iostream>
#include <vector>
using namespace std;

//k place from left side
//time complexity O(n) and space complexity O(k)
class Solution {
public:
    void kplace (vector <int> &arr, int k)
    {
        int n = arr.size();
        k = k % n;
        int temp[k];

        for (int i = 0; i < k; i++)
        {
            temp[i] = arr[i];
        }
        for (int i = k; i < n; i++)
        {
            arr[i - k] = arr[i];
        }
        for (int i = 0; i < k; i++)
        {
            arr[n - k + i] = temp[i];
        }
    }
};


int main ()
{
    vector <int> v;
    int n, k;
    cout <<"Enter the size of the array: ";
    cin >>n;
    v.resize(n);
    for (int i=0;i<n;i++)
    {
        cout <<"Enter element " <<i+1 <<": ";
        cin >>v[i];
    }
    cout <<"Input the number of positions to rotate: ";
    cin >>k;
    
    Solution sol;
    sol.kplace(v, k);
    
    cout <<"Array after rotation: ";
    for (int i=0;i<n;i++)
    {
        cout <<v[i] <<" ";
    }
    cout <<endl;
}