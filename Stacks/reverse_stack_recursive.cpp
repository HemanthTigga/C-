#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &Stack, int value)
{
    //base case
    if(Stack.empty())
    {
        Stack.push(value);
        return;
    }
    int num = Stack.top();
    Stack.pop();

    //recursive call
    insertAtBottom(Stack, value);
    Stack.push(num);
}

void reverseStack(stack<int> &Stack)
{
    //base case
    if(Stack.empty())
    {
        return;
    }

    int num = Stack.top();
    Stack.pop();

    //recursive call
    reverseStack(Stack);
    insertAtBottom(Stack, num);
}

int main()
{
    stack<int> s;
    //int n=5;
    s.push(3);
    s.push(5);
    s.push(9);
    s.push(2);
    s.push(4);
    reverseStack(s);

    cout<<"After reversing"<<endl;
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}

//T.C = 0(N^2)
