#include <iostream>
using namespace std;

int main() {
	// your code goes her
	int t;
	cin>>t;
	while(t>0)
	{
	    t--;
	    int x,y;
	    cin>>x>>y;
	    if((x*100)<(y*10))
	    cout<<"disposable"<<endl;
	    else if((x*100)==(y*10))
	    cout<<"cloth"<<endl;
	    else
	    cout<<"cloth"<<endl;
	}
	return 0;
}
