#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
    void reverse (vector <int>&arr, int start, int end)
    {
        while (start <= end)
        {
            int temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
            start++;
            end--;
        }
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
    sol.reverse(v, 0, n-1);
    
    cout <<"Array after reversal: ";
    for (int i=0;i<n;i++)
    {
        cout <<v[i] <<" ";
    }
    cout <<endl;
}