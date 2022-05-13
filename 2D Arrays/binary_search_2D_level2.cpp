//Level 2
//both rows and cols are sorted
//example:- 1 4 7  11
//          2 5 8  12
//          3 6 9  16
//          4 7 10 17
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
class binarysearch2
{
public:
    bool searchmat(vector<vector<int>> mat,int row,int col,int target)
    {
        int rowindex=0;
        int colindex=col-1;
        while(rowindex<row && colindex>=0)
        {
            int element=mat[rowindex][colindex];
            if(element==target)
                return true;
            else if(element<target)
                rowindex++;
            else
                colindex--;
        }
        return false;
    }
};
int main()
{
    vector<vector<int>> arr;
    binarysearch2 obj;
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
