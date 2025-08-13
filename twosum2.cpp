#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
vector <int> twosum (vector <int>&arr, int target)
{
    int n=arr.size();
    int left;
    int right= n-1;
    while (left<right)
    {
        int sum=arr[left]+arr[right];
        if (sum==target)
        {
            return {arr[left],arr[right]};
        }
        else if (sum<target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
}
};
int main ()
{
    vector <int> v;
    int n,target;
    cout << "enter the size of the array" << endl;
    cin >> n;
    cout << "enter the elements of the array" << endl;
    for (int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << "enter the target sum" << endl;
    cin >> target;
    Solution obj;
    vector <int> ans=obj.twosum(v,target);
    cout << "The two elements whose sum is equal to the target are: " << ans[0] << " and " << ans[1] << endl;
}