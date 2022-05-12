//remove all occurances of a substring

#include<iostream>
using namespace std;
string removeocc(string s,string part)
{
    while(s.length()!=0&&s.find(part)<s.length())
    {
        s.erase(s.find(part),part.length());
    }
    return s;
}
int main()
{
    string str,part;
    cin>>str;
    cin>>part;
    cout<<removeocc(str,part);
}
