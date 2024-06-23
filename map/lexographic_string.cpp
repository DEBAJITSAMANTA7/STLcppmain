#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
   map<string ,int> mp;
   int n;
   cin>>n;
   for (int  i = 0; i < n; i++)
   {
    string s;
    cin>>s;
    
    // cout<<mp[s]<<" ";
    mp[s]=mp[s]+1;
   }
   cout<<endl;
   for (auto it: mp)

   {
    cout<<it.first<<"->"<<it.second<<endl;
   }
   cout<<mp.size()<<"_------";
    return 0;
}
