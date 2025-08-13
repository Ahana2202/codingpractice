#include <iostream>
#include <vector>
using namespace std;    
class Solution {
public:
 int linearsearch (vector <int>&arr,int target)
 {
     int n=arr.size();
     for (int i=0;i<n;i++)
     {
        if (arr[i]==target)
        {
            return i;

        }
     }
     return -1;
 }
};
int main ()
{
    vector <int>v;
    int n, target;
    cout <<"Enter the size of the array: "; 
    cin >>n;
    v.resize(n);
    for (int i=0;i<n;i++)
    {
        cout <<"Enter element " <<i+1 <<": ";
        cin >>v[i];
    }
    cout <<"Input the target element to search: ";
    cin >>target;
    Solution sol;
    int index=sol.linearsearch(v, target); //this is used to call the function
    //and store the index of the target element as it is int linearsearch 
    if (index==-1)
    {
        cout <<"Element not found in the array." <<endl;
    }
    else
    {
        cout <<"Element found at index " <<index <<endl;
    }
    return 0;
}