#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
    //using moore s voting algorithm to find the majority element
    int majorityElement(vector<int>& nums) {
        int ctr=0;
        int el;
        int n=nums.size();
        for (int i=0;i<n;i++)
        {
            if (ctr==0)
            {
                ctr=1;
                el=nums[i];
            }
            else if (nums[i]==el)
            {
                ctr++;

            }
            else 
            {
                ctr--;
            }
        }
        int ctr1=0;
        for (int j=0;j<n;j++)
        {
            if (nums[j]==el)
            {
                ctr1++;
            }
            
        }
        if (ctr1>(n/2))
        {
            return el;
        }

        return -1; // If no majority element found
    }

};
int main ()
{
    vector <int> v;
    int n;
    cout <<"Enter the size of the array: ";
    cin >>n;
    v.resize(n);
    cout <<"Enter the elements of the array: ";
    for (int i=0;i<n;i++)
    {
        cin >>v[i];
    }
    Solution obj;
    int majority = obj.majorityElement(v);
    if (majority != -1)
    {
        cout <<"The majority element is: "<<majority<<endl;
    }
    else
    {
        cout <<"No majority element found."<<endl;
    }
}