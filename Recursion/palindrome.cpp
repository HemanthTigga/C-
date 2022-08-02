#include<iostream>
using namespace std;
bool checkpalin(string s,int i,int j)
{
    /*cout<<"s="<<s<<endl;
    cout<<"i="<<i<<endl;
    cout<<"j="<<j<<endl;*/

    //Base case
    if(i>j)
        return true;
    if(s[i]!=s[j])
        return false;
    else
        return checkpalin(s,i+1,j-1);
        //recursive call

}
int main()
{
    string name="abcba";
    if(checkpalin(name,0,name.length()-1))
        cout<<"Palindrome"<<endl;
    else
        cout<<"Not Palindrome"<<endl;
}
