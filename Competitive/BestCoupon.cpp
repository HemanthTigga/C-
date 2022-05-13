#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,p;
	cin>>T;
	while(T>0)
	{
	    T--;
	    int x;
	    cin>>x;
	    if(x<100)
	    {
	        p=(10/100)*x;
	        cout<<p<<endl;
	    }
	    else
	    {
	        p=0.1*x;
	        //cout<<p;
	        if(p>=100)
	        {
	            cout<<p<<endl;
	        }
	        else
	        {
	            cout<<100<<endl;
	        }
	    }
	    p=0;
	}
	return 0;
}
