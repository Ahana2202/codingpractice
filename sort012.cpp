#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
 //sort an array of 0s, 1s, and 2s 
 class Solution {
    public:

    void sort (vector <int>&arr)
    {

        int n=arr.size();
        // better approach using counting sort
        int cut0=0,cut1=0,cut2=0;
        for (int i=0;i<n;i++) //time complexity O(2n) and space complexity O(1)
        {
            if (arr[i]==0)
            cut0++;
            else if (arr[i]==1)
            cut1++;
            else if (arr[i]==2)
            cut2++;
        }
        for (int i=0;i<cut0;i++)
            arr[i]=0;
        
        for (int i=cut0;i<cut0+cut1;i++)
        arr[i]=1;

        for (int i=cut0+cut1;i<n;i++)
        arr[i]=2;

       


    }
 };
int main ()
{
    vector <int> v;
    int n;
    cout << "enter the size of the array" << endl;
    cin >> n;
    cout << "enter the elements of the array (0s, 1s, and 2s only)" << endl;
    for (int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }   
    Solution s;
    s.sort(v);
    cout << "The sorted array is: ";
    for (int i=0;i<n;i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}