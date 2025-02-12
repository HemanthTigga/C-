#include<iostream>
#include<stack>
using namespace std;

bool findRedundantBrackets(string &s)
{
    stack<char> st;
    for(int i=0;i<s.length();i++)
    {
        char ch = s[i];
        if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            st.push(ch);
        }
        else
        {
            //ya toh ')' or lowercase letter
            if(ch == ')')
            {
                bool isRedundant = true;
                while(st.top() != '(')
                {
                    char top=st.top();
                    //cout<<"top= "<<top<<endl;
                    if(top == '+' || top == '-' || top == '*' || top == '/')
                    {
                        isRedundant = false;
                    }
                    st.pop();
                }
                //cout<<"isRedundant= "<<isRedundant<<endl;
                if(isRedundant == true)
                    return true;
                st.pop();
            }
        }
    }
    return false;
}

int main()
{
    string str = "((a+(a+b)))";
    if(findRedundantBrackets(str))
        cout<<"Redundant"<<endl;
    else
        cout<<"Not Redundant"<<endl;
    return 0;
}
