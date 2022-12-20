#include<bits/stdtr1c++.h>
using namespace std;

//Parameterised Way of Finding the sum of First N Natural Numbers

void sum_of_n(int n, int i, int sum)
{
    //Base Case:
    if(i > n)
    {
        cout<<"Sum of first "<<n<<" Natural numbers is: "<<sum;
        return;
    }

    sum = sum+i;
    sum_of_n(n,++i, sum);
}

int main()
{
    int n;
    cout<<"\nEnter the value of n: ";
    cin>>n;

    sum_of_n(n,1,0);
    return 0;
}
