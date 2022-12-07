#include<bits/stdc++.h>
using namespace std;

void print_until_1(int n)
{
    //Base Case
    if(n==0) return;
    
    //Operation
    cout<<n<<" ";
    
    //Recursive Call
    print_until_1(n-1);
}

int main()
{
    cout<<"Task: To print the values until 1\n";
    cout<<"Enter the value of n: ";
    int n;
    cin>>n;
    print_until_1(n);
    return 0;
}
