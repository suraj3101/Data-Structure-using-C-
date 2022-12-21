#include<bits/stdc++.h>
using namespace std;

//Lower and Upper case alphabets treated as different.
bool is_string_same(string &s, int i, int n)
{
    if(i>=n/2) return true;

    if(s[i] != s[n-i-1])
        return false;

    return is_string_same(s, i+1, n);
}

int main()
{
    string s;
    cout<<"Enter the string: ";
    getline(cin, s);
    int n = s.size();
    bool answer = is_string_same(s, 0, n);

    if(answer == 1) cout<<"String is Palindrome"<<endl;
    else cout<<"String is not a Palindrome"<<endl;

    return 0;
}