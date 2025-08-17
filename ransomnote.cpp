#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
    public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> charCount;
        for (char c : magazine) {
            charCount[c]++;
        }
        for (char c : ransomNote) {
            if (charCount[c] == 0) {
                return false;
            }
            charCount[c]--;
        }
        return true; 
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--) {
        string ransomNote, magazine;
        cin >> ransomNote >> magazine;
        Solution sol;
        if (sol.canConstruct(ransomNote, magazine)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}