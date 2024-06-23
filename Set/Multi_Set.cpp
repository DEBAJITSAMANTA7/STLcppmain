#include <bits/stdc++.h>
using namespace std;
// time complexity log(n).
int main(int argc, char const *argv[])
{
    /* code */

    multiset<string> mts;
    mts.insert("abc");
    mts.insert("abc");
    mts.insert("def");
    mts.insert("ghp");
    mts.insert("ghp");
    auto it=mts.find("abc");
    if(it!=mts.end())
    {
        mts.erase(it);
    }
    for(auto it: mts)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    
    mts.erase("ghp");
    for(auto it: mts)
    {
        cout<<it<<" ";
    } 

    return 0;

}
