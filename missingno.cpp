#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
//    //brute force approach to find the missing number in an array
//    int missno (vector <int>&arr)
//    {
//     int n=arr.size();
//     int flag;
//     for (int i=1;i<n;i++)
//     {
//         flag=0;
//         for (int j=0;j<n-1;j++)
//         {
//             if (arr[j]==i)
//             {
//                 flag=1;
//                 break;
//             }
//         }
//         if (flag==0)
//         {
//             return i; // Return the first missing number
//         }
//     }
//    return -1; // If no missing number is found
// }


//better approach to find the missing number in an array
we use hash value here
int missno (vector <int>&arr)
{
    
    int n= arr.size();
    vector <int> has(n,0); // Initialize hash vector of size n with 0
    for (int i=0;i<n-1;i++)
    {
        has[arr[i]]= 1; // Store the hash value of each element in the array as 1
    }
    for (int i=1;i<n;i++)
    {
        if (has[i]==0) // Check if the hash value of the current number is 0
        {
            return i; // Return the first missing number
        }
    }
    return -1; // If no missing number is found
}

    // // Optimized approach using the formula for the sum of the first n natural numbers
    // int missno(vector<int>& arr) {
    //     int n = arr.size();
    //     int expectedSum = (n * (n + 1)) / 2; // Sum of first n natural numbers
    //     int actualSum = 0;
        
    //     for (int num : arr) {
    //         actualSum += num; // Calculate the sum of elements in the array
    //     }
        
    //     return expectedSum - actualSum; // The difference gives the missing number
    // }

};

int main ()
{
    vector <int> v;
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
    int missingNumber = sol.missno(v);
    
    if (missingNumber != -1) {
        cout <<"The missing number is: " <<missingNumber <<endl;
    } else {
        cout <<"No missing number found." <<endl;
    }
    
    return 0;
}