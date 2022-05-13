#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define ld double
using namespace std;

int main() {
	// your code goes her
	ll t,n,i,j;
	cin>>t;
	while(t>0)
	{
	    t--;
	    cin>>n;
	    vector<ll>v(n);
	    ll s1=0;
	    map<ll,ll>mp;
	    for(i=0;i<n;i++)
	    {
	        cin>>v[i];
	        s1=s1+v[i];
	        mp[v[i]]++;
	    }
	    ld d1=(s1/(n*1.0));
	    ld d2=((d1*1.0)*((n-2)*1.0))*1.0;
	    ld r=(s1-d2)*1.0;
	    ll ans=0;
	    for(i=0;i<n;i++)
	    {
	        ll f=(r-v[i]);
	        if(f+v[i]==r)
	        {
	            if(f==v[i] && mp[f]>0)
	            {
	                ans=ans+mp[f];
	                ans--;
	            }
	            else
	            {
	                ans=ans+mp[f];
	            }
	        }
	    }
	    cout<<ans/2<<"\n";
	}
	return 0;
}
