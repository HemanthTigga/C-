#include<iostream>
using namespace std;
bool isPresent(int arr[][4],int target)
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(arr[i][j]==target)
                return true;
        }
    }
    return false;
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
    int target;
    cin>>target;
    if(isPresent(arr,target)){
        cout<<"Element Found"<<endl;
    }
    else
        cout<<"Not Found"<<endl;
    return 0;
}
