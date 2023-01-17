#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void nextSmallerElement(vector<int> &arr, int n)
{
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);
    for(int i=n-1;i>=0;i--)         //flow change for previous smaller element
    {
        int curr = arr[i];
        while(s.top()>=curr)
        {
            s.pop();
        }
        //ans is stack ka top
        ans[i]=s.top();
        s.push(curr);
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    //return ans;
}
int main()
{
    vector<int> arr={2,1,4,3};
    cout<<"hi"<<endl;
    nextSmallerElement(arr,arr.size());
    return 0;
}
