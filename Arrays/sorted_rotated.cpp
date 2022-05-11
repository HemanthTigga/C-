//check if the array is sorted and rotated

#include<iostream>
using namespace std;
class sorted_rotated
{
    public:
    bool check(int arr[],int n)
    {
        int count=0;
        for(int i=1;i<n;i++)
        {
            if(arr[i-1]>arr[i])
                count++;
        }
        if(arr[n-1]>arr[0])
            count++;
        return (count<=1);
    }
};

int main()
{
    sorted_rotated obj;
    int n;
    cin>>n;
    int arr[n];
    for(int j=0;j<n;j++)
    {
        cin>>arr[j];
    }
    if(obj.check(arr,n))
        cout<<"True";
    else
        cout<<"False";
}
