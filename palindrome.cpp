#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
bool ispalindrome (string s)
{
    string cleaned = "";
  for (char c:s)
  {
    if (isalnum(c)){
    cleaned+= tolower (c);
    }
  }

  int left=0;
  int right=cleaned.size()-1;
while (left<right)
{
    if (cleaned[left]!=cleaned [right])
    {
        return false;
    }
    left++;
    right--;
}
return true;
}
};
int main ()
{
    Solution sol;
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    if (sol.ispalindrome(s))
    {
        cout << "The string is a palindrome." << endl;
    }
    else
    {
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
}