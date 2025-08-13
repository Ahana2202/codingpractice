#include <iostream>
#include <vector>

using namespace std;
 //remove element from an array 
 int removeelement (vector <int> &arr, int target )
 {
    int n=arr.size();
    int i=0,j=0;
    while (i<n)
    {
        if (arr[i]!=target )
        {
            arr[i]=arr[j]; //copy the element to the front
            j+=1; //increment j to point to the next position
        }
        i+=1; //increment i to check the next element
    }
    return j;
    }
 int main ()
 {
    vector <int> v;
    int n,target;
    cout << "Enter the size of the array: ";
    cin >> n;
    v.resize(n);
    for (int i=0;i<n;i++)
    {
        cout << "Enter element " << i+1 << ": ";
        cin >> v[i];
    }
    cout << "Enter the target element to remove: ";
    cin >> target;

    int newSize = removeelement(v, target);
    
    cout << "Array after removing elements equal to " << target << ": ";
    for (int i=0;i<newSize;i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
 }