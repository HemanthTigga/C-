#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void wavePrint(vector<vector<int>> arr,int nRows,int mCols)
{
    vector<int> ans;
    for(int col=0;col<mCols;col++)
    {
        if(col&1){
            //odd case
            for(int row=nRows-1;row>=0;row--)
            {
                ans.push_back(arr[row][col]);
            }
        }
        else{
            //even case
            for(int row=0;row<nRows;row++)
            {
                ans.push_back(arr[row][col]);
            }
        }
    }
    for(int i=0;i<nRows*mCols;i++)
    {
        cout<<ans[i]<<" ";
    }
}
int main()
{
    vector<vector<int>> arr;
    int m,n,a;
    cout<<"Enter size of matrix"<<endl;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        vector<int> temp;
        for(int j=0;j<m;j++)
        {
            cin>>a;
            temp.push_back(a);
        }
        arr.push_back(temp);
        temp.clear();
    }
    wavePrint(arr,n,m);
}
