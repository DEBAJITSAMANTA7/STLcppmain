#include <bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
 string arr[]={"abc","bcd","abc"};
auto n= sizeof(arr)/sizeof(arr[0]);
map<string,int> mp;
// for (int i = 0; i <n; i++)
// {
//     mp[arr[i]]++;
// }

mp["abc"]=1;
mp.insert({"abc",233});

for (auto it: mp)
{
    cout<<it.first<< "  "<<it.second <<endl;
}



    return 0;
}
