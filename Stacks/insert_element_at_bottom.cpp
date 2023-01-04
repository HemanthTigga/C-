#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int>& myStack, int x)
{
    if(myStack.empty())
    {
        myStack.push(x);
        return;
    }
    int num = myStack.top();
    myStack.pop();

    //recursive call
    solve(myStack, x);
    myStack.push(num);
}

stack<int> pushAtBottom(stack<int>& myStack, int x)
{
    solve(myStack, x);
    return myStack;
}

int main()
{
    stack<int> s;
    int n=5;
    s.push(3);
    s.push(5);
    s.push(9);
    s.push(2);
    s.push(4);
    s = pushAtBottom(s,n);

    cout<<"After Insertion"<<endl;
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }

    return 0;
}
