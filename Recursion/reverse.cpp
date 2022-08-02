#include<iostream>
using namespace std;
void reverse(int i,int j,string& s)
{
    //Base case
    if(i>j)
        return ;
    swap(s[i],s[j]);
    i++;
    j--;
    //recursive call
    reverse(i,j,s);
}
int main()
{
    string name="Hemu";
    reverse(0,name.length()-1,name);
    cout<<name<<endl;
    return 0;
}
