
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void reverseArray(int arr[] , int m,int n)
{
	// Write your code here.
	int st = m+1;
	int ed = n-1;
	int t=ed;
	cout<<st+(ed-st)/2<<endl;
	for(int i=st;i<st+(ed-st)/2;i++)
	{
	    cout<<"hi"<<endl;
		int temp = arr[i];
		arr[i] = arr[t];
		arr[t--] = temp;
	}
}

int main()
{
    int arr[1] = {5};
    reverseArray(arr,0,1);
    for(int i=0;i<1;i++)
    {
        cout<<arr[i]<<" ";
    }
}
