#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v2={1,2,3,4,2,3};
    auto it = find(v2.begin(),v2.end(),3);
    if (it != v2.end())
    {
        cout<<"exist";
    }
    else
    {
        cout<<" Not Exist";
    }
    if (v2.count(2))
    {
        
    }
    {
        /* code */
    }
    

    return 0;
}