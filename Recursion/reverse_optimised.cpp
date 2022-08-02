#include<iostream>
using namespace std;
void reverse(int i,string& s)
{
    //Base case
    if(i>s.length()-i-1)
        return ;
    swap(s[i],s[s.length()-i-1]);
    i++;
    //j--;
    //recursive call
    reverse(i,s);
}
int main()
{
    string name="Hemu";
    reverse(0,name);
    cout<<name<<endl;
    return 0;
}
