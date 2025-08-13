#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
void movezeroes (vector <int>& v)
{
    int i;
    int n=v.size();
    int p=0; // Pointer for the position of the next non-zero element
    for (i = 0; i < n; i++)
{
    if (v[i] != 0)
    {
        v[p] = v[i];
        p++;
    }
}
    for (int i=p;i<n;i++)
    {
        v[i]=0;
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
    sol.movezeroes(v);
    cout <<"Array after moving zeroes: ";
    for (int i=0;i<n;i++)
    {
        cout <<v[i] <<" ";
    }
    cout <<endl;
}
