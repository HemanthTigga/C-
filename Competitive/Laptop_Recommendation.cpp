#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,k;
	cin>>t;
	while(t--){
	    int n,max=-1,c=0,maxi,p=0;
	    cin>>n;
	    int a[n];
	    int temp[n];

	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+n);
	   // for(int i=0;i<n;i++)
	   // {
	   //     cout<<a[i]<<endl;
	   // }
	    int j=0;
	    for(int i=0;i<n-1;i++)
	    {
	        if(a[i]!=a[i+1])
	        temp[j++]=a[i];
	    }
	    temp[j++]=a[n-1];
	    int temp1[j];
	    for(int i=0;i<j;i++)
	    {
	        temp1[i]=0;
	    }
	   // for(int i=0;i<j;i++)
	   // {
	   //     cout<<temp[i]<<endl;
	   // }
	    //cout<<endl;
	    for(int i=0;i<j;i++)
	    {
	        for(k=0;k<n;k++)
	        {
	            //cout<<temp[i]<<endl;
	            //cout<<a[k]<<endl;
	            if(temp[i]==a[k])
	            c++;
	        }
	        //cout<<"c="<<c<<endl;
	        temp1[i]=c;
	        c=0;
	    }

	   // for(int i=0;i<j;i++)
	   // {
	   //     cout<<temp[i]<<" ";
	   // }
	   // cout<<endl;
	   // for(int i=0;i<j;i++)
	   // {
	   //     cout<<temp1[i]<<" ";
	   // }
	    for(int i=0;i<j;i++)
	    {
	        if(temp1[i]>max)
	        {
	            max=temp1[i];
	            maxi=temp[i];
	        }
	       // else if(temp1[i]==max)
	       // {
	       //     p=1;
	       // }
	    }
	   // cout<<"max "<<max<<endl;
	    c=0;
	    for(int i=0;i<j;i++)
	    {
	       // cout<<"temp1[i] "<<temp1[i]<<endl;
	        if(max==temp1[i])
	        {
	            c++;
	        }
	    }

	    if(c>1)
	    cout<<"confused"<<endl;
	    else
	    cout<<maxi<<endl;

	}
	return 0;
}
