#include<bits/stdc++.h>
using namespace std;

void reversal_array(int arr[], int i, int n)
{
    if(i >= (n/2)) return;

    swap(arr[i], arr[n-i-1]);

    reversal_array(arr, i+1, n);
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

    reversal_array(arr, 0, n);
    cout<<"\nReverse of Array: ";
    for(int i = 0; i<n; ++i)
        cout<<arr[i]<<" ";

    return 0;
}