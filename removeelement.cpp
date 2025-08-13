#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
    int removeelement(vector <int> &arr, int val)
{
    int n=arr.size();
    int i=0,j=0;
    while (i<n)
    {
        if (arr[i]!=val) // fixed here
        {
            arr[j]=arr[i];
            j++;
        }
        i++; //how skipping the element
    // if the current element is not equal to val, copy it to the j-th position
    // and increment j and if it is equal to val, just increment i
    // to skip the element
    }
    return j; // return the new length of the array
}
};
int main ()
{
    vector <int> arr;
    int val;
    cout << "Enter the array size: ";
    int n;
    cin >> n;
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    cout << "Enter the value to remove: ";
    cin >> val;
    Solution sol;
    int newLength = sol.removeelement(arr, val);
    cout << "New array length: " << newLength << endl;
    cout << "Modified array: ";
    for (int i = 0; i < newLength; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}