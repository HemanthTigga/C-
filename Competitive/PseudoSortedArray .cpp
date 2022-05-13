#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes her
	int t;
	cin>>t;
	while(t>0)
	{
	    t--;
	    long long int n,x,y,i,c=0;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(a[i-1]>a[i] && i>=1)
	        {
	            swap(a[i-1],a[i]);
	            if(a[i-2]>a[i-1] && i>=2)
	            {
	                c=c+2;
	            }
	            else if(a[i-2]<a[i-1] && i>=2)
	            {
	                c=c+1;
	            }
	            else if(i==1)
	            {
	                c=c+1;
	            }
	            else
	            {
	                c=c+1;
	            }
	        }
	    }
	    if(c<2)
	    {
	        cout<<"yes"<<endl;
	    }
	    else
	    {
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
