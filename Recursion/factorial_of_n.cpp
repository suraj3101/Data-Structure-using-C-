#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if(n == 0) return 1;

    return n*fact(n-1);
}

int main()
{
    int n;
    cout<<"\nEnter the value of n: ";
    cin>>n;

    long int answer = fact(n);
    cout<<"Factorial of "<<n<<" is: "<<answer;

    return 0;
}