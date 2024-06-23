#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    unordered_set<string>st;
    int n;
    cin>>n;
    for (auto i = 0; i < n; i++)
    {
        string str;
        cin>>str;
        st.insert(str);

    }
    int n1;
    cin>>n1;

    while (n1--)
    {
       string str1;
       cin>>str1;
       auto it =st.find(str1);

       if (it!=st.end())
       {
        cout<<(*it)<<"  Yes "<<endl;
       }
       else cout<<"No";

    }
    

    
    return 0;
}
