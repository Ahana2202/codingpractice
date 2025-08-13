#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:

string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty())
    return " ";
    string prefix = strs[0]; // Start with the first string as the prefix
    for (int i=0;i<strs.size ();i++)
    {
        while (strs[i].find (prefix)!=0)
        // Check if the current prefix is a prefix of the current string
        {
           prefix.pop_back();
           // If not, remove the last character from the prefix
           if (prefix.empty())
           return " "; // If the prefix becomes empty, return an empty string
        }
    }
    return prefix; // Return the longest common prefix found
}
};
int main ()
{
    vector <string> v;
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;
    v.resize(n);
    for (int i=0;i<n;i++)
    {
        cout << "Enter string " << i+1 << ": ";
        cin >> v[i];
    }
    Solution sol;
    string result = sol.longestCommonPrefix(v);
    cout << "The longest common prefix is: " << result << endl;
    return 0;
}