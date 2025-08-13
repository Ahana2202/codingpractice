#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
    public:
    int findduplicate (vector <int> &arr)
    {
        sort(arr.begin(), arr.end());
        int n=arr.size();
        if (n==0)
    {
        return -1; // No elements to check
    }
    int ui=1;
    for (int i=1;i<n;i++)
    {
        if (arr[i]!= arr[i-1])
        {
            arr[ui]=arr[i];
            ui++;
        }
    }
    
    return ui; // Return the new size of the array with duplicates removed
}
};
int main ()
{
    vector <int> v;
    int n;
    cout <<"Enter the size of the array: ";
    cin >>n;
    v.resize(n);
    for (int i=0;i<n;i++)
    {
        cout <<"Enter element " <<i+1 <<": ";
        cin >>v[i];
    }
    
    Solution sol;
    int newSize = sol.findduplicate(v);
    
    cout <<"Array after removing duplicates: ";
    for (int i=0;i<newSize;i++)
    {
        cout <<v[i] <<" ";
    }
    cout <<endl;
}