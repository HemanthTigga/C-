#include<iostream>
using namespace std;
int sum(int *arr,int n,int k=0)
{
    //base case
    if(n==0)
        return 0;
    /*if(n==1)
        return arr[0];*/

    //recursive call
    return arr[k++]+sum(arr+1,n-1);
}
int main()
{
    int arr[5]={3,2,5,1,6};
    int n=5;
    cout<<sum(arr,n);
}
