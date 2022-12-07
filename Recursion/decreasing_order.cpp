#include<bits/stdc++.h>
using namespace std;

void printuntil1(int n)
{
    if(n==0) return;

    cout<<n<<" ";
    printuntil1(n-1);
}

int main()
{
    cout<<"Task: To print the values until 1\n";
    cout<<"Enter the value of n: ";
    int n;
    cin>>n;
    printuntil1(n);
}