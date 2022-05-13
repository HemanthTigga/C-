#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
class spiral
{
public:
    vector<int> spiralorder(vector<vector<int>> mat,int row,int col)
    {
        vector<int> ans;
        int count=0;
        int total=row*col;
        //index initialization
        int startingRow=0;
        int startingCol=0;
        int endingRow=row-1;
        int endingCol=col-1;
        while(count<total)
        {
            //print starting row
            for(int index=startingCol;index<=endingCol && count<total;index++)
            {
                ans.push_back(mat[startingRow][index]);
                count++;
            }
            startingRow++;
            //print ending col
            for(int index=startingRow;index<=endingRow && count<total;index++)
            {
                ans.push_back(mat[index][endingCol]);
                count++;
            }
            endingCol--;
            //print ending row
            for(int index=endingCol;index>=startingCol && count<total;index--)
            {
                ans.push_back(mat[endingRow][index]);
                count++;
            }
            endingRow--;
            //print starting col
            for(int index=endingRow;index>=startingRow && count<total;index--)
            {
                ans.push_back(mat[index][startingCol]);
                count++;
            }
            startingCol++;
        }
        return ans;
    }
};
int main()
{
    vector<vector<int>> arr;
    spiral obj;
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
    vector<int> arr1=obj.spiralorder(arr,n,m);
    for(int i=0;i<n*m;i++)
    {
        cout<<arr1[i]<<" ";
    }
    return 0;
}
