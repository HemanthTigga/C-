#include <iostream>
using namespace std;

int main() {
	// your code goes her
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x,y;
	    cin>>n>>x>>y;
	    int queen=n-x+x-1+n-y+y-1;
	    int a=min(n-x,n-y);
	    int b=min(n-x,y-1);
	    int x1=min(x-1,n-y);
	    int y1=min(x-1,y-1);
	    cout<<(queen+a+b+x1+y1)<<endl;
	}
	return 0;
}
