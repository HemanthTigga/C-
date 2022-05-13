//Level 1
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
class binarysearch1
{
public:
    bool searchmat(vector<vector<int>> mat,int row,int col,int target)
    {
        int start=0;
        int end=row*col-1;
        int mid=start+(end-start)/2;
        while(start<=end)
        {
            int element=mat[mid/col][mid%col];
            if(element==target)
                return 1;
            else if(element<target)
                end=mid-1;
            else
                mid=start+(end-start)/2;
        }
        return false;
    }
};
int main()
{
    vector<vector<int>> arr;
    binarysearch1 obj;
    int m,n,a,target;
    cout<<"Enter size of matrix and target"<<endl;
    cin>>n>>m>>target;
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
    cout<<obj.searchmat(arr,n,m,target);
    return 0;
}
