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
	    if(x>0&&y>0)
	    {
	        if(x==y)
	        cout<<"yes"<<endl;
	        else
	        cout<<"no"<<endl;
	    }
	    else
	    {
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
