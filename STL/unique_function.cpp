#include<bits/stdc++.h>
using namespace std;


//UNIQUE FUNCTION: 
/*
 1. 3 parameters (forward iterator first, forward iterator last, predicate).
 2. If predicate is not used then by default it is (==) operator.
 3. Used to remove the duplicates present consecutively in the range (first and last).
 4. SYNTAX: unique(forward iterator first, forward iterator last) 
 5. Returns an iterator next to the unique elements.
 6. It does not change the size of the container.
 7. After unique elements, there are undefined elements(garbage elements) which can be removed using resize function.
 8. By using (==) operator, only duplicates elements present consecutively are handled.
*/

int main()
{
    int n;
    cout<<"\nEnter the Size of vector: ";
    cin>>n;
    vector<int>v(n);
    cout<<"\nEnter the elements: ";

    for(int i = 0; i<n; i++)
        cin>>v[i];

    cout<<"\nVector becomes: ";

    for(int i = 0; i<n; i++)
        cout<<v[i]<<" ";

    auto it = unique(v.begin(), v.end());

    cout<<"\n\nUnique Vector becomes: ";
    
    for(it = v.begin(); it!=v.end(); ++it)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

/*
 Let's take an example: v = [1,1,2,3,5,8,8,8,9,10]
 v.begin is at 0 index (element 1) and v.end is at n index (it means just right of last element (10))
 Now, 
 1. 1 copy as it is in v.
 2. Compare 1 and 1 -> same -> remove 1 (consecutive) 
 3. Compare 1 and 2 -> not same -> remain as it is in v and increment the iterator.
 Similarly, If consecutive elements are same then remove else increment the iterator by 1 position.

 Final, v becomes: v = [1,2,3,5,8,9,10, *, *, *];
 Here, * are undefined values or garbage values.
*/

        


    return 0;
}