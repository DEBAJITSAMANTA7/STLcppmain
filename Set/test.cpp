#include <bits/stdc++.h>
using namespace std;
int mediun(int arr[],int arr2[],int n,int m)
{
vector <int> v;
vector <int> v2;
for (int  i = 0; i < n; i++)
{
   v.push_back(arr[i]);
}
for (int  i = 0; i < m; i++)
{
   v.push_back(arr2[i]);
}
sort(v.begin(),v.end());
for (int i = 0; i <n+m; i++)
{
    if(v[i]!=v[i+1])
    {
    v2.push_back(v[i]);
    }
}
for (auto  it: v2)
{
   cout<< it<<" ";
}

int init =v2.size();
// if(v2.size()/2 ==0)
// {
//     return(  v2[init]+v2[init-1]);
// }
// else
// {
//     return(v2[init]);
// }

return(v2[v2.size()/2 -1 ]);
// return(69);

}
int main(int argc, char const *argv[])
{
    int arr[]={3,1,1,2};
    int arr2[]={4,3,3,2,1};
    int n=4,m=5;
    cout<<endl<<mediun(arr,arr2,n,m);
    return 0;
}
