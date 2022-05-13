#include<iostream>
using namespace std;
void printsum(int arr[][4])
{
    int maxi=INT_MIN,p=-1;
    for(int i=0;i<3;i++)
    {
        int s=0;
        for(int j=0;j<4;j++)
        {
            s=s+arr[i][j];
        }
        cout<<s<<endl;
        if(s>maxi)
        {
            p=i;
            maxi=s;
        }
    }
    cout<<"position="<<p<<endl;
    cout<<maxi<<endl;
}
int main()
{
    int arr[3][4];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>arr[i][j];
        }

    }
    printsum(arr);
    return 0;
}
