#include<bits/stdc++.h>
using namespace std;

void reversal_array(int arr[], int low, int high)
{
    if(low>=high) return;

    swap(arr[low], arr[high]);

    reversal_array(arr, low+1, high-1);
}

int main()
{
    int n;
    cout<<"\nEnter the number of elements of array: ";
    cin>>n;

    int arr[n];
    cout<<"\nEnter the elements of elements: ";
    for(int i = 0; i<n; ++i)
        cin>>arr[i];

    cout<<"\nOriginal Array is: ";
    for(int i = 0; i<n; ++i)
        cout<<arr[i]<<" ";

    reversal_array(arr, 0, n-1);
    cout<<"\nReverse of Array: ";
    for(int i = 0; i<n; ++i)
        cout<<arr[i]<<" ";

    return 0;
}