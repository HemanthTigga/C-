#include<iostream>
#include<stack>
using namespace std;

bool isValidparenthesis(string exp)
{
    stack<char> s;
    for(int i=0;i<exp.length();i++)
    {
        char ch = exp[i];

        //if opening bracket, stack push
        //if close bracket, stacktop check and pop

        if(ch == '('  || ch == '{' || ch == '[')
        {
            s.push(ch);
        }
        else
        {
            //for closing bracket
            if(!s.empty())
            {
                char top = s.top();
                if(ch == ')' && top == '(' ||
                   ch == '}' && top == '{' ||
                   ch == ']' && top == '[')
                {
                    s.pop();
                }
                else
                {
                    return 0;
                    //cout<<"false1"<<endl;
                }
            }
            else
            {
                return 0;
                //cout<<"false2"<<endl;
            }
        }
    }
    if(s.empty())
    {
        return 1;
        //cout<<"true"<<endl;
    }

    else
    {
        return 0;
        //cout<<"false"<<endl;
    }

}

int main()
{
    //isValidparenthesis("[{()}]");
    if(isValidparenthesis("[{()}]"))
       {
           cout<<"true"<<endl;
       }

    else
        {
            cout<<"false"<<endl;
        }

    return 0;
}
