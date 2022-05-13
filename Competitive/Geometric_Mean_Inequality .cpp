#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0)
	{
	    t--;
	    int n;
	    cin>>n;
	    int arr[n];
	    int x=0,y=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        if(arr[i]==-1)
	        x++;
	        else
	        y++;
	    }
	    if(abs(x-y)<2)
	    {
	        cout<<"yes";
	    }
	    else if(abs(x-y)==2)
	    {
	        if(x%2)
	        cout<<"no";
	        else
	        cout<<"yes";
	    }
	    else
	    {
	        cout<<"no";
	    }
	    cout<<endl;
	}
	return 0;
}
