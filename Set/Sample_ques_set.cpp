// print all string in lexographical order only
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    set<string>st;
    int n;
    cin>>n;
    for (int  i = 0; i < n; i++)
    {
        string str;
        cin>>str;
        st.insert(str);

    }
    for(auto it: st)
    {
        cout<<it<<" ";
        
    }
    
    return 0;
}
