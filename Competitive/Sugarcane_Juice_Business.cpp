#include <iostream>
using namespace std;

int main() {
	// your code goes her
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int totalincome=n*50;
	    int sg=0.2*totalincome;
	    int sm=0.2*totalincome;
	    int sr=0.3*totalincome;
	    int profit=totalincome-(sg+sm+sr);
	    cout<<profit<<endl;
	}
	return 0;
}
