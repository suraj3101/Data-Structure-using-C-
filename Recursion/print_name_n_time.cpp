#include<bits/stdc++.h>
using namespace std;

void print_n_times(int count, int n)
{
    //Base Condition
    if(count == n)
    {
        cout<<"Your Name"<<endl;
        return;
    }
    //Iteration performed
    cout<<"Your Name"<<endl;
    count++;
    //Function Call
    print_n_times(count, n);
}

int main()
{
    int n;
    cout<<"\nEnter the value of n in how many times you want to print your name: ";
    cin>>n;

    print_n_times(1,n);
    return 0;
}