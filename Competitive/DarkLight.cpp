#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long T,p=4;
	cin>>T;
	while(T>0)
	{
	    T--;
	    long long n,k;
	    cin>>n>>k;

	    /*if(n==0)
	    {
	        if(k==1)
	        cout<<"on"<<endl;
	        else if(k==0)
	        cout<<"off"<<endl;
	    }
	    else if(k==1)
	    {
	        cout<<"Ambiguous"<<endl;
	    }*/
	    if(k==0)
	    {
	        if(n%4==0)
	        {
	            cout<<"off"<<endl;
	        }
	        else
	        {
	            cout<<"on"<<endl;
	        }
	    }
	    else if((k==1 && n==0)||(k==1 && n%4==0))
	    {
	         cout<<"on"<<endl;
	    }

	    else
	    {
	        cout<<"Ambiguous"<<endl;
	    }

	}
	return 0;
}
