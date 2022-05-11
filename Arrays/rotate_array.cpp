#include<iostream>
using namespace std;
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int arr1[n];
    for(int j=0;j<n;j++)
    {
        cin>>arr[j];
    }
    int k;
    cin>>k;
    cout<<" Before Moving Zeroes"<<endl;
    print(arr,n);
    cout<<"size= "<<n<<endl;
    for(int j=0;j<n;j++)
    {
        arr1[(j+k)%n]=arr[j];
    }
    cout<<" Before Moving Zeroes"<<endl;
    print(arr1,n);
}
