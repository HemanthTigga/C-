#include<iostream>
using namespace std;
bool check(char a[],int n)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        if(a[s]!=a[e])
            return false;
        else
        {
            s++;
            e--;
        }
    }
    return true;
}
int main()
{
    char name[]={'h','e','m','u'};
    if(check(name,4))
        cout<<"True";
    else
        cout<<"False";
    return 0;
}
