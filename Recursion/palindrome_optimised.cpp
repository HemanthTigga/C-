#include<iostream>
using namespace std;
bool checkpalin(string s,int i)
{
    //Base case
    if(i>s.length()-i-1)
        return true;
    if(s[i]!=s[s.length()-i-1])
        return false;
    else
        return checkpalin(s,i+1);
        //recursive call
}
int main()
{
    string name="abcba";
    if(checkpalin(name,0))
        cout<<"Palindrome"<<endl;
    else
        cout<<"Not Palindrome"<<endl;
}
