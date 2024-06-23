#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
 map<int,int> mp;
 mp[1];
 mp[2]=20;
 mp[3]=30;
 mp[4]=40;
 mp[5]=50;
//  mp.insert({4,40});
//  find fnction and erase and clear
// find return a iterator that value if not 2nd last value
auto it =mp.find(7);
// cout<<(*it).first<<" "<<(*it).second;
// if(it!=mp.end() ) cout<<"exist";
// else cout<<"Not exist";
// now delete a key from map
// mp.erase(1);
// mp.erase(2);
// mp.erase(3);
for(auto it1: mp)
{
    cout<<it1.first<<" "<<it1.second<<endl;
}
cout<<mp.size();



mp.clear();
for(auto it1: mp)
{
    cout<<it1.first;
}

    return 0;
}
