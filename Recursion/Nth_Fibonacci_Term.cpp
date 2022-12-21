#include<bits/stdc++.h>
using namespace std;

int fibonacci_number(int n)
{
    if(n<=1) return n;

    return fibonacci_number(n-1) + fibonacci_number(n-2);
}

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int answer = fibonacci_number(n);

    cout<<n<<"th fibonacci number is: "<<answer<<endl;
    return 0;
}