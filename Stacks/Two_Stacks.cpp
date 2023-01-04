#include<iostream>
#include<stack>
using namespace std;

class TwoStack
{
public:
    int size;
    int top1,top2;
    int *arr;

    TwoStack(int s)
    {
        this -> size = s;
        arr = new int[size];
        top1 = -1;
        top2 = size;
    }

    //push in stack 1
    void push1(int num)
    {
        if(top2 - top1 > 1)
        {
            top1++;
            arr[top1]=num;
        }
        else
        {
            cout<<"Stack Overflow"<<endl;
        }
    }

    //push in stack 2
    void push2(int num)
    {
        if(top2 - top1 > 1)
        {
            top2--;
            arr[top2]=num;
        }
        else
        {
            cout<<"Stack Overflow"<<endl;
        }
    }

    //pop in stack 1
    int pop1()
    {
        if(top1 > -1)
        {
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else
        {
            return -1;
        }
    }

    //pop in stack 2
    int pop2()
    {
        if(top2 < size)
        {
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else
        {
            return -1;
        }
    }
};
int main()
{
    TwoStack st(5);
    st.push1(10);
    st.push2(4);
    st.push1(101);
    st.push2(14);
    st.push1(7);
    cout<<st.pop1()<<endl;
    cout<<st.pop2()<<endl;
    return 0;
}
