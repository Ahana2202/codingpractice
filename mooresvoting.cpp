#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:  //time complexity O(n) and space complexity O(1)
    // Moore's Voting Algorithm to find the majority element
    // A majority element is an element that appears more than n/2 times in the array
int mooresvoting (vector <int>& arr)
{
    int n=arr.size();
    int ctr=0;
    int el;
    for (int i=0;i<n;i++)
    {
        if (ctr==0)
        {
            ctr+=1;
            el=arr[i];

        }
        else if (arr[i]==el)
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
        if (arr[j]==el)
        {
            ctr1++;
        }
        
    }
    if (ctr1>(n/2))
    {
        return el;
    }

    return -1; // If no majority element found
};
};
int main ()
{
    Solution sol;
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int majorityElement = sol.mooresvoting(arr);
    if (majorityElement != -1)
    {
        cout << "Majority element is: " << majorityElement << endl;
    }
    else
    {
        cout << "No majority element found." << endl;
    }
    return 0;
}
