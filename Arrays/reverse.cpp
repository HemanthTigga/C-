//Reverse an array after 'm'

#include<iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector<int> v,int m)
{
    int s=m,e=v.size()-1;
    while(s<=e)
    {
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}
void print(vector<int> v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> v;
    int n;
    cin>>n;
    int m,a;
    cin>>m;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    /*v.push_back(11);
    v.push_back(7);
    v.push_back(12);
    v.push_back(4);
    v.push_back(21);
    v.push_back(1);*/
    cout<<"Before Reversing"<<endl;
    print(v);
    vector<int> ans=reverse(v,m);
    cout<<endl;
    cout<<"m= "<<m<<endl<<endl;
    cout<<"After Reversing"<<endl;
    print(ans);
    return 0;
}
