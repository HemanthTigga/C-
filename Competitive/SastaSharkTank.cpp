#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T>0)
	{
	    T--;
	    int a,b;
	    cin>>a>>b;
	    int va=(a*100)/10;
	    int vb=(b*100)/20;
	    if(va==vb)
	    {
	        cout<<"ANY"<<endl;
	    }
	    else if(va>vb)
	    cout<<"FIRST"<<endl;
	    else
	    cout<<"SECOND"<<endl;

	    va=0;
	    vb=0;
	}
	return 0;
}
