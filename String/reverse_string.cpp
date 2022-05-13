#include<iostream>
using namespace std;
void reverse(char name[],int n)
{
    string str="";
    int s1=0;
    int e=n-1;
    while(s1<=e)
    {
        swap(name[s1++],name[e--]);
    }
    for(int i=0;i<n;i++)
        cout<<name[i];
    /*for(int i=0;i<n;i++)
        str=str+name[i];
    cout<<str;*/
}
int main()
{
    char name[]={'h','e','m','u'};
    reverse(name,4);
    return 0;
}
