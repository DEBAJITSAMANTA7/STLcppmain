#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    /* code */
    // unorder_map is also same but 1. 
    // it use Hash Table not tree like ordered map,   2. not having order form map, 3.inbuild function
    unordered_map<string, int> unmp;
    string s;

int n;
cout << "Enter the number of strings: ";
cin >> n;
    for (int i = 0; i <n; i++)
    {
        cin>>s;
        unmp[s]++;

    }
    // if use given any specific no of value as a output
    int n1;
    cin>>n1;
    while(n1--)
    {
        string s1;
        cin>>s1;

     cout<<unmp[s1]<<" ";
    }
    // cout<<endl<<" --- if --- all value print"<<endl;
    // for(auto it: unmp)
    // {
    //     cout<<it.first <<"->"<<it.second<<" ";
    // }
return 0;
}
