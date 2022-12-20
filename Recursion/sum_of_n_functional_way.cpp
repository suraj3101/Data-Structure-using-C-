#include<bits/stdc++.h>
using namespace std;

int sum_of_n_numbers(int n)
{
    if(n == 0)
        return 0;

    return n+sum_of_n_numbers(n-1);
}

int main()
{
    int n;
    cout<<"\nEnter the value of n: ";
    cin>>n;

    //Functional Call
    int sum = sum_of_n_numbers(n);

    cout<<"Sum of First "<<n<<" Natural Numbers is: "<<sum<<endl;
    return 0;
}