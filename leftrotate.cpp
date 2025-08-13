#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
    void leftrotate(vector<int>& nums){
        {
            int temp=nums[0];
            int n=nums.size ();
            for (int i=1;i<n;i++)
            {
                nums[i-1]=nums [i];

            }
            nums[n-1]=temp; // Move the first element to the end
        }
        
    }

    };
    int main ()
{
    vector <int>v;
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
    sol.leftrotate(v);
    cout <<"Array after left rotation: ";
    for (int i=0;i<n;i++)
    {
        cout <<v[i] <<" ";
    }
    cout <<endl;
}
