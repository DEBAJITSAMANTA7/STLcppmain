#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    stack<int> stk;
    stk.push(10);
    stk.push(11);
    stk.push(11);
    stk.push(12);
    while (!stk.empty())
    {
       cout<<stk.top()<<endl;; //shouw the data 
       stk.pop(); //delete the data
    }
    cout<<stk.size();
    return 0;
}
