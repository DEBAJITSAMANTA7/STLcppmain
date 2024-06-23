#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    queue<string> que;
    que.push("Hello");
    que.push("Hello");
    que.push("Hello");
    while (! que.empty())
    {
        cout<<que.front()<<endl;
        que.pop();
    }
    cout<<que.size();
    
    return 0;
}
