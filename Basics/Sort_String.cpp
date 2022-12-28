#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout<<"\nEnter the String: ";
    cin>>s;

    cout<<"Original String: "<<s<<endl;

    cout<<"Sorted String: ";

    sort(s.begin(), s.end());
    cout<<s<<endl;
    return 0;
}