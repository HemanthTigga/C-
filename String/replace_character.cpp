//Replace spaces with @40

#include<iostream>
using namespace std;
string replacestring(string str)
{
    string temp="";
    cout<<str;
    for(int i=0;i<str.length();i++)
    {
        //cout<<"str[i]=" <<str[i];
        if(str[i]==' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
            temp.push_back(str[i]);
    }
    return temp;
}
int main()
{
    string str;
    getline(cin,str);
    cout<<replacestring(str);
}
