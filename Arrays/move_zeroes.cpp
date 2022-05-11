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
    for(int j=0;j<n;j++)
    {
        cin>>arr[j];
    }
    int i=0;
    cout<<" Before Moving Zeroes"<<endl;
    print(arr,n);
    cout<<"size= "<<n<<endl;
    for(int j=0;j<n;j++)
    {
        if(arr[j]!=0)
        {

            swap(arr[i],arr[j]);
            i++;
        }
    }
    cout<<" Before Moving Zeroes"<<endl;
    print(arr,n);
}
