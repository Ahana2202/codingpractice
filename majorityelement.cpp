#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
    // Function to find the majority element in an array
    // A majority element is an element that appears more than n/2 times in the array   
int majority (vector <int>&arr)
{
   int n=arr.size();
   int ctr,t;
   for (int i=0;i<n;i++)
   {
    ctr=0;
    for (int j=0;j<n;j++)
    {
        if (arr[i]==arr[j])
        {
            ctr++;
        }
    }
    t=n/2;
    if (ctr>t)
    {
        return arr[i];
    }
   
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
    int res=sol.majority (v);
    if (res)
    {
        cout <<"The majority element is: " <<res <<endl;
    }
    else
    {
        cout <<"No majority element found." <<endl;
    }
}