/*Using Stack
  T.C = O(n)
  S.C = O(n)*/
#include<bits/stdc++.h>
queue<int> rev(queue<int> q)
{
    stack<int> s;
    while(!q.empty())
    {
        int ele = q.front();
        q.pop();
        s.push(ele);
    }
    while(!s.empty())
    {
        int ele = s.top();
        s.pop();
        q.push(ele);
    }
    return q;
}
/*Using Recursion
  T.C = O(n)
  S.C = O(1)*/