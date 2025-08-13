#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
    void reverse (vector <int>&arr, int start, int end)
    {
        while (start<=end)
        {
            int temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;    
            start++;
            end--;
        }
    }
    void kplace (vector <int>&arr, int k)
    {
        int n=arr.size();
        k=k%n; // Handle cases where k is greater than n
        reverse(arr, 0, n-1); // Reverse the entire array   
        reverse(arr, 0, n-k-1); // Reverse the first n-k elements
        reverse(arr, n-k, n-1); // Reverse the last k elements
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