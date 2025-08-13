#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
    // merge two sorted arrays into one sorted array
    void mergesortedarr(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1=m-1;
        int p2=n-1;
        int p=m+n-1;
        while (p1>=0 && p2>=0)
        {
             if (nums1[p1] >nums2[p2])
             {
                nums1[p]=nums1[p1];
                p1--;

             }
             else 
             {
                nums1[p]=nums2[p2];
                p2--;
                
             }
             p--;
        }
        while (p2>=0)
        {
            nums1[p]=nums2[p2];
            p2--;
            p--;
        }
    }
};
int main() {
    Solution sol;
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    int m = 3; // number of elements in nums1
    int n = 3; // number of elements in nums2
    sol.mergesortedarr(nums1, m, nums2, n);
    
    for (int num : nums1) {
        cout << num << " ";
    }
    return 0;
}