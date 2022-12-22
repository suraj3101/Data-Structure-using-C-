#include<bits/stdc++.h>
using namespace std;

void print_subsequences(int i, int arr[], vector<int>&v, int n)
{
    if(i == n)
    {
        //Print the subsequence and return;
        for(auto it: v)
            cout<<it<<" "; 

        if(v.size() == 0) cout<<"{NULL}";
        cout<<endl;
        return;
    }

    //Pick the particular index into the subsequence: 

    v.push_back(arr[i]);
    
    print_subsequences(i+1, arr, v, n);

    v.pop_back();

    //Not Pick the particular index into the subsequence: 

    print_subsequences(i+1, arr, v, n);
}

int main()
{
    int n;
    cout<<"\n\nEnter the number of elements of array: ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the elements: ";
    for(int i = 0; i<n; ++i)
        cin>>arr[i];

    cout<<"\nArray is: ";
    for(int i = 0; i<n; ++i)
        cout<<arr[i]<<" ";
    cout<<endl;

    cout<<"\nSubsequences is: "<<endl;
    vector<int>v;
    print_subsequences(0, arr, v, n);
    return 0;
}