#include <iostream>
using namespace std;

int main() {
	// your code goes her
	int T,min=0,c=0;
	cin>>T;
	while(T>0)
	{
	    T--;
	    int x,y;
	    cin>>x>>y;
	    if(x<y)
	    {
	        while(true)
	        {
	            c=c+1;
    	        x=x+2;
    	        y=y+1;
    	        if(x==y)
    	        {
    	            min=c;
    	            break;
    	        }
	        }
	    }
	    else if(x>y)
	    {
	        while(true)
	        {
	            c=c+1;
    	        x=x-2;
    	        y=y-1;
    	        if(x==y)
    	        {
    	            min=c;
    	            break;
    	        }
	        }
	    }
	    cout<<min<<endl;
	    c=0;
	    min=0;
	}

	return 0;
}
