#include <iostream>
using namespace std;

int main() {
	// your code goes her
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    int p=(107.0/100.0)*x;
	    //cout<<"p="<<p<<endl;
	    if(y<=p)
	    {
	        cout<<"yes"<<endl;
	    }
	    else
	    cout<<"no"<<endl;
	    p=0;
	}
	return 0;
}
