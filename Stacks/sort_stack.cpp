#include<iostream>
#include<stack>
using namespace std;

void sortInsert(stack<int> &Stack, int num)
{
    //base case
    if(Stack.empty() || (!Stack.empty() && Stack.top() < num))
    {
        Stack.push(num);
        return;
    }
    int n = Stack.top();
    Stack.pop();

    //recursive call
    sortInsert(Stack, num);
    Stack.push(n);

}

void sortStack(stack<int> & Stack)
{
    //base case
    if(Stack.empty())
    {
        return;
    }

    int num = Stack.top();
    Stack.pop();

    //recursive call
    sortStack(Stack);
    sortInsert(Stack, num);
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
    sortStack(s);

    cout<<"After sorting"<<endl;
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}

//T.C = O(N^2)
