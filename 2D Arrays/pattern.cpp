#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int t=n;
    int t1=n;
    n=2*n-1;
    int r1=0,r2=n-1,c1=0,c2=n-1;
    int arr[n][n];
    for(int i=0;i<n;i++)
        {
            for(int j =0;j<n;j++)
            {
                arr[i][j] = 0;
            }
        }
        r1=0;
        r2=n-1;
    for(int k=0;k<t1;k++)
    {
        for(int i=r1;i<=r2;i++)
        {
            for(int j =r1;j<=r2;j++)
            {
                if((i==r1 || i==r2) || (j==r2 || j==r1))
                {
                    arr[i][j] = t;
                }
            }
        }
        r1++;
        r2--;
        t--;
    }
    for(int i=0;i<n;i++)
        {
            for(int j =0;j<n;j++)
            {
                cout<<arr[i][j]<<"  ";
            }
            cout<<endl;
        }
        return 0;
}
