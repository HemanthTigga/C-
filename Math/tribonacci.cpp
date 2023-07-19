#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    n = n-2;
    int a=0, b=1, c=1,d;
    while(n)
    {
        d = a+b+c;
        //cout<<"d="<<d<<endl;
        a=b;
        b=c;
        c=d;
        //d = 0;
        n--;
    }
    cout<<"d= "<<d;
    return 0;
}
