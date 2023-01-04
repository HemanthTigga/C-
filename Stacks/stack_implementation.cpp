#include<iostream>
#include<stack>
using namespace std;

class Stack
{
    //properties
    int *arr;
    int size;
    int top;

    //behaviour
public:

    Stack (int size)
    {
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int ele)
    {
        if(size-top > 1)
        {
            top ++;
            arr[top] = ele;
        }
        else
        {
            cout<<"Satck Overflow"<<endl;
        }
    }

    void pop()
    {
        if(top>-1)
        {
            top --;
        }
        else
        {
            cout<<"Stack Underflow"<<endl;
        }
    }

    int peak()
    {
        if(top>-1 && top<size)
            return arr[top];
        else
        {
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }

    bool isEmpty()
    {
        if(top == -1)
            return 1;
        else
            return 0;
    }
};

int main()
{
    Stack st(5);
    st.push(22);
    st.push(242);
    st.push(42);
    st.push(45);
    st.push(2);
    st.push(10);
    //cout<<st.peak();
    st.pop();
    //cout<<st.peak();
    st.pop();
    st.pop();
    st.pop();
    st.pop();

    cout<<st.peak();
    if(st.isEmpty())
        cout<<"Satck is Empty"<<endl;
    else
        cout<<"Stack is not  Empty"<<endl;

}
