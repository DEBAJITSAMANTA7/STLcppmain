#include <bits/stdc++.h>
using namespace std;
void set_val(set<string> &s1)
{
 for(auto it:s1)
 {
    cout<<it<<" ";
 }

cout<<"  another process for print"<<endl;
// for (auto i = s1.begin(); i!= s1.end(); i++)
// {
//     cout<<(*i)<<" ";
// }

}
int main()
{
  set<string>s1;
  set<int>s2;

  s1.insert("ABC");
  s1.insert("Hello");
  s1.insert("Deb");
  s1.insert("Deb");
 
//   set_val(s1);
//   erase the element from the set with find a key
auto it = s1.find("Deb");
if (it !=s1.end())
{
    // cout<<(*it);
    s1.erase(it);
    set_val(s1);
}
else{
    cout<<"Not Exist"<<endl;
}






    return (0);
}