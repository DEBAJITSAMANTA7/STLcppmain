#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
   unordered_map<int,string> mp;
   mp[1]="DEB";
   mp[2]="JIT";
 auto it=mp.find(3);
 if(it!=mp.end())
 {
    cout<<(*it).first<<" "<<(*it).second <<" Exist";
 }
   else
   {
    cout<<"Not exist";
   }
   
    return 0;
}
