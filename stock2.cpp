#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution{
public:
vector <int> stock2(vector <int> arr){
    int n=arr.size();
    int profit=0;
    for (int i=1;i<n;i++)
    {
        if (arr[i]>arr[i-1])
        {
            profit += arr[i] - arr[i-1];
        }
    }
    return {profit};
}

};
int main ()
{
    vector <int> arr;
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    arr.resize(n);
    cout<<"Enter the elements of the array: ";
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Solution sol;
    vector <int> ans=sol.stock2(arr);
    for (int i=0;i<ans.size();i++)
    {
        cout<<"the best time is "<<ans[i]<<" ";
    }
    return 0;
}