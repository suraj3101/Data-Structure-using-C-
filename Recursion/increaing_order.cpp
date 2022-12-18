#include<bits/stdc++.h>
using namespace std;

void print(int count, int n)
{
    if(count > n)
        return;
    
    cout<<count<<" ";
    print(count+1, n);
}

int main()
{
    int n;
    cout<<"\nEnter the value of n: ";
    cin>>n;
    cout<<"\nSeries becomes: ";
    print(1, n);
    return 0;
}